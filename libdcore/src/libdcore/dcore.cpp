#include <libdcore/dcore.hpp>

#include <ostream>
#include <stdexcept>

namespace dcore
{
	void SayHello(std::ostream &out, const std::string &name)
	{
		if(name.empty())
			throw std::invalid_argument("Empty Name!");

		out << "Hello, " << name << '!' << std::endl;
  	}
}
