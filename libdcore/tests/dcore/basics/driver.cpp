#include <sstream>
#include <stdexcept>

#include <libdcore/version.hpp>
#include <libdcore/dcore.hpp>

#undef NDEBUG
#include <cassert>

#include <iostream>

int main()
{
	using namespace dcore;

	{
		std::ostringstream o;
		SayHello(o, "World");
		assert(o.str() == "Hello, World!\n");
	}

	try
	{
		std::ostringstream o;
		SayHello(o, "");
		assert(false);
	}
	catch(const std::invalid_argument& e)
	{
		assert(e.what() == std::string("Empty Name!"));
	}

	std::cout << "Done!" << std::endl;
}
