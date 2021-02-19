#ifdef RISCOS
#elif __unix__
#else
#include <windows.h>
#endif
#include "interactive.h"
//#include "../libs/json.hpp"

// for convenience
//using json = nlohmann::json;

//void Interactive::load_help() {
/*	// Need to scan the manual folder for entries and make a list of all help keywords
	std::vector<std::string> files;
#ifdef RISCOS
	_kernel_swi_regs regs;
	int i = 0;
	do {
		char buf[256];
		regs.r[0] = 9;
		regs.r[1] = (int)v.c_str();
		regs.r[2] = (int)&buf;
		regs.r[3] = 1;
		regs.r[4] = i++;
		regs.r[5] = 256;
		regs.r[6] = 0;
		_kernel_swi(OS_GBPB, &regs, &regs);
		files.push_back(buf);
	} while (regs.r[4] != -1);
#elif __unix__
#else
	std::string v("\\ManualPages\\*");
	std::wstring pattern = s2ws(v);
	WIN32_FIND_DATA data;
	HANDLE hFind;
	if ((hFind = FindFirstFile(pattern.c_str(), &data)) != INVALID_HANDLE_VALUE) {
		do {
			std::wstring r(data.cFileName);
			auto s = ws2s(data.cFileName);
			if (s.compare(".") != 0 && s.compare("..") != 0) {
				files.push_back(s);
			}
		} while (FindNextFile(hFind, &data) != 0);
		FindClose(hFind);
	}
#endif*/
//}
