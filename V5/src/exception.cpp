#include "exception.h"

const char *DARICException::what() const throw()
{
	std::string s;
	switch (location)
	{
	case ErrorLocation::PARSER:
		s = "Parser";
		break;
	case ErrorLocation::COMPILER:
		s = "Compiler";
		break;
	case ErrorLocation::RUNTIME:
		s = "Runtime";
		break;
	}
	s += "[" + error + "] at '" + filename + "':" + std::to_string(line_number) + ":" + std::to_string(char_position) + "\r";
	return s.c_str();
}

#ifdef RISCOS
void DARICException::pretty_print() const throw()
#else
const void DARICException::pretty_print() const throw()
#endif
{
	// Are we in BANKED mode?
	if (g_env.graphics.is_banked())
	{
		g_env.graphics.open(g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height(), Mode::CLASSIC, g_env.cwd);
	}
	auto saved_colour = g_env.graphics.current_colour;
	g_env.graphics.colour(255, 0, 0);
	g_env.graphics.colour(255, 0, 0);
	switch (location)
	{
	case ErrorLocation::PARSER:
		g_env.text.print_console("[Syntax] ");
		break;
	case ErrorLocation::COMPILER:
		g_env.text.print_console("[Compiler] ");
		break;
	case ErrorLocation::RUNTIME:
		g_env.text.print_console("[Runtime] ");
		break;
	}
	g_env.log("[" + error + "] at '" + filename + "':" + std::to_string(line_number) + ":" + std::to_string(char_position));
	std::string serror = error;
	// Take first 60 and last 60
	if (error.length() > 120)
	{
		serror = error.substr(0, 60) + "..." + error.substr(error.length() - 60, 60);
	}
	replaceAll(serror, "\\n", " ");

	// Do we have line numbers?
	auto ln = line_number;
	if (line_number_mapping.count(line_number) != 0)
	{
		ln = (*line_number_mapping.find(line_number)).second;
	}

	g_env.graphics.colour(255, 255, 255);
	g_env.text.print_console(serror);
	g_env.graphics.colour(128, 128, 128);
	g_env.text.print_console(" at ");
	if (show_filename)
	{
		g_env.graphics.colour(0, 255, 0);
		g_env.text.print_console(filename);
		g_env.graphics.colour(128, 128, 128);
		g_env.text.print_console(":");
	}
	g_env.graphics.colour(0, 255, 0);
	g_env.text.print_console(std::to_string(ln));
	g_env.graphics.colour(128, 128, 128);
	g_env.text.print_console(":");
	g_env.graphics.colour(0, 255, 0);
	g_env.text.print_console(std::to_string(char_position));
	g_env.text.print_console("\r");
	if (location == ErrorLocation::COMPILER)
	{
		g_env.graphics.colour(0, 255, 255);
		g_env.text.print_console(source[raw_line_number]);
		g_env.text.print_console("\r");
		g_env.graphics.colour(0, 255, 0);
		for (auto i = 0; i < char_position; i++)
		{
			g_env.text.print_console("-");
		}
		g_env.text.print_console("^\r");
	}
	g_env.graphics.current_colour = saved_colour;
}
