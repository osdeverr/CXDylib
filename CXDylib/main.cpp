#include <iostream>
#include "CXDylib.h"

int main()
{
	try {
		cxlib lib("CXLibTest.dll", CXDylib::LibraryBehavior::UnloadOnDestruct);
		auto print = lib.GetFunction<int>("DllPrint");
		print("Hello, world!");
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught - " << e.what() << std::endl;
	}
}