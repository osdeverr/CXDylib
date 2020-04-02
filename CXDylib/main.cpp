#include <iostream>
#include "CXDylib.h"

int main()
{
	try {
		CXDylib::Library lib("CXLibTest.dll", CXDylib::LibraryBehavior::UnloadOnDestruct);
		auto print = lib.GetFunction<int>("DllPrint");
		print("Hello, world!");
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught - " << e.what() << std::endl;
	}
}