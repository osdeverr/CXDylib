#include <cstdio>

extern "C" {
	__declspec(dllexport) void DllPrint(const char* text)
	{
		printf("%s\n", text);
	}
}