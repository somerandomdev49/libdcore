#pragma once

#include <iosfwd>
#include <string>

#include <libdcore/export.hpp>

namespace dcore
{
	// Print a greeting for the specified name into the specified
	// stream. Throw std::invalid_argument if the name is empty.
	LIBDCORE_SYMEXPORT
	void SayHello(std::ostream &out, const std::string &name);
}
