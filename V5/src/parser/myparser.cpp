#include "myparser.h"
#include "../compiler/compiler.h"
#include "../compiler/file_lookup.h"
#include "../environment.h"
#include <iostream>
#include <set>
#include <exception>

extern Environment g_env;
extern VM* g_vm;
using namespace antlr4;
bool fail_on_first_error = false;
bool parse_errors = false;
size_t error_line;
short error_position;
int error_count = 0;
std::vector<ParserFiles> parsed_files;
std::vector<std::string> concat_file_cache;
std::vector<std::string> source;
UINT32 current_line = 0;

LineFileLookup file_and_line_lookup(UINT32 line_number)
{
	LineFileLookup flp;
	short ii = 0;
	for (auto it = parsed_files.begin(); it != parsed_files.end(); ++it) {
		auto i = (*it);
		if (i.line_start < line_number) {
			flp.file_number = ii;
			flp.filename = i.filename;
			flp.line = line_number - i.line_start;
		}
		ii++;
	}
	return flp;
}

std::string getLineFromStream(std::string stream, size_t start, size_t end)
{
	// Scan back for start of line
	auto t = ' ';
	while (t != '\n' && start > 0) {
		start--;
		t = stream[start];
	};

	// Scan for end of line
	while (t != '\n' && end < stream.length()) {
		end++;
		t = stream[end];
	};
	return stream.substr(start, end - start + (t == '\n' ? 0 : 1));
}

class MyParserErrorListener : public antlr4::BaseErrorListener {

	void syntaxError(
		antlr4::Recognizer* recognizer,
		antlr4::Token* offendingSymbol,
		size_t line,
		size_t charPositionInLine,
		const std::string& msg,
		std::exception_ptr e) override
	{
		if (!parse_errors) {
			error_line = line;
			error_position = static_cast<short>(charPositionInLine);
			parse_errors = true;
		}
		error_count++;
		auto fl = file_and_line_lookup(static_cast<UINT32>(line));
		if (error_count == 5) {
			throw DARICException(ErrorLocation::PARSER, fl.filename, static_cast<UINT32>(fl.line), line, static_cast<short>(charPositionInLine), "Stopping at 5 errors");
		}
		else if (fail_on_first_error) {
			throw DARICException(ErrorLocation::PARSER, fl.filename, static_cast<UINT32>(fl.line), line, static_cast<short>(charPositionInLine), msg);
		}
		else {
			std::cout << msg << std::endl;
			auto s = offendingSymbol->getInputStream();
			auto l = getLineFromStream(s->toString(), offendingSymbol->getStartIndex(), offendingSymbol->getStopIndex());
			replaceAll(l, "\n", "\r");

			// File, line char etc.
			auto saved_colour = g_env.graphics.current_colour;
			g_env.graphics.colour(255, 0, 0);
			g_env.text.print_console("Syntax error");
			g_env.graphics.colour(128, 128, 128);
			g_env.text.print_console(" at ");
			if (parsed_files.size() > 1) {
				g_env.graphics.colour(0, 255, 0);
				g_env.text.print_console(fl.filename);
				g_env.graphics.colour(128, 128, 128);
				g_env.text.print_console(":");
			}
			g_env.graphics.colour(0, 255, 0);
			g_env.text.print_console(std::to_string(fl.line));
			g_env.graphics.colour(128, 128, 128);
			g_env.text.print_console(":");
			g_env.graphics.colour(0, 255, 0);
			g_env.text.print_console(std::to_string(charPositionInLine));
			g_env.text.print_console("\r");

			// Actual error
			g_env.graphics.colour(0, 255, 255);
			g_env.text.print_console(l);
			g_env.text.print_console("...\r");
			g_env.graphics.colour(0, 255, 0);
			for (size_t i = 0; i < charPositionInLine; i++) {
				g_env.text.print_console("-");
			}
			g_env.text.print_console("^\r\r");
			g_env.graphics.colour(255, 255, 255);

			g_env.graphics.current_colour = saved_colour;
		}
	}
};

/*std::set<std::string> MyParser::check_if_installs(std::string line, std::string filename) {
	std::set<std::string> installs;
	int i = 0;
	if (line.length() > 10 && line.substr(0, 7).compare("INSTALL") == 0) {
		auto f = line.find_first_of('"');
		auto l = line.find_last_of('"');
		if (f == std::string::npos || l == std::string::npos) {
			throw DARICException(ErrorLocation::PARSER, filename, static_cast<UINT32>(i), static_cast<short>(0), "Error processing INSTALL statements");
		}
		auto file = line.substr(f + 1, l - f - 1);
		installs->insert(file);
	}
	else {
		break;
	}
	i++;
}
*/
void MyParser::load_stream(std::string filename, bool interactive, std::stringstream* ss) {
	ParserFiles pf;
	pf.filename = filename;
	pf.line_start = current_line;
	parsed_files.push_back(pf);

	// Always add a new line to keep the parser happy
	*ss << std::endl;

	// Save lines for debugging purposes
	std::string line;
	source.clear();
	int i = 0;
	std::set<std::string> installs;
	while (std::getline(*ss, line)) {
		if (line.length() > 10 && line.substr(0, 7).compare("INSTALL") == 0) {
			auto f = line.find_first_of('"');
			auto l = line.find_last_of('"');
			if (f == std::string::npos || l == std::string::npos) {
				throw DARICException(ErrorLocation::PARSER, filename, static_cast<UINT32>(i), static_cast<UINT32>(i), static_cast<short>(0), "Error processing INSTALL statements");
			}
			auto file = line.substr(f + 1, l - f - 1);
			installs->insert(file);
		}
		source.push_back(line);
		i++;
	}

	// Recursively add new installs


	/*	// Load source into a concatenated stringstream
		std::stringstream ss;
		std::ifstream stream;
	#ifdef WINDOWS
		if (!interactive) {
			filename += ".daric";
		}
	#endif
		stream.open(filename);
		if (!stream.is_open()) {
			throw std::runtime_error("File '" + filename + "'not found\n");
		}
		ss << stream.rdbuf();
		stream.close();

		// Parse file, checking for INSTALLs
		std::string line;
		while (std::getline(ss, line)) {
			check_if_installs(line, filename, &installs);
		}*/
}

void MyParser::parse_and_compile(Compiler* compiler, bool interactive, std::stringstream* ss, std::string filename)
{
	current_line = 0;
	parsed_files.clear();

	/*	parse_errors = false;
		error_count = 0;
		line_number_mapping.clear();

		// We loop around adding all the installs as we go, but not duplicating obviously
		do {
			std::string line;
			while (std::getline(ss, line)) {
				check_if_installs(line, filename, &installs);
			}

			// Now include these files
	/*		UINT32 current_line = 0;
			std::stringstream ss_install;
			parsed_files.clear();
			for (auto it = installs.rbegin(); it != installs.rend(); ++it) {
				std::string file = (*it);
	#ifdef WINDOWS
				file += ".daric";
	#endif
				stream.open(file);
				if (!stream.is_open()) {
					throw std::runtime_error("File '" + file + "' not found\r");
				}

				// Count lines
				std::stringstream ssl;
				ssl << stream.rdbuf();
				auto s = ssl.str();
				auto lc = std::count(s.begin(), s.end(), '\n') + 1;

				// Add to stream
				ss_install << s << std::endl;
				stream.close();

				// And add an entry so we can do line and file lookup
				ParserFiles pf;
				pf.filename = file;
				pf.line_start = current_line;
				parsed_files.push_back(pf);
				current_line += static_cast<UINT32>(lc);
			}*/

			/*	ParserFiles pf;
				pf.filename = filename;
				pf.line_start = current_line;
				parsed_files.push_back(pf);
				ss.clear();
				ss.seekg(0);
				ss_install << ss.rdbuf();
				ss = std::move(ss_install);

				// Save for disassembly purposes
				concat_file_cache.clear();
				while (std::getline(ss, line)) {
					concat_file_cache.push_back(std::move(line));
				}
				ss.clear();*/

	load_stream(filename, interactive, ss);

	// Setup stream
	ss->clear();
	ss->seekg(0);
	ANTLRInputStream input(*ss);

	// Tokeniser
	DARICLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	// Parser
	MyParserErrorListener errorListener;
	DARICParser parser(&tokens);
	parser.removeErrorListeners();
	parser.addErrorListener(&errorListener);
	parser.setBuildParseTree(true);
	parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::SLL);
	DARICParser::ProgContext* tree = parser.prog();

	if (parse_errors) {
		auto fl = file_and_line_lookup(static_cast<UINT32>(error_line));
		if (parsed_files.size() > 1) {
			throw DARICException(ErrorLocation::PARSER, fl.filename, static_cast<UINT32>(fl.line), error_line, static_cast<short>(error_position), "Error(s)");
		}
		else {
			throw DARICException(ErrorLocation::PARSER, "", static_cast<UINT32>(fl.line), error_line, static_cast<short>(error_position), "Error(s)");
		}
	}

	// Add to files list
	compiler->compile(g_vm, tree);
}
