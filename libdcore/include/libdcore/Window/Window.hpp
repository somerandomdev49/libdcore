#pragma once
#include <libdcore/dcore.hpp>
#include <glm/glm.hpp>

namespace DCore::Window
{
	/** class containing information about the game window. */
	class Window
	{
		/** returns the size of the window in pixels
		    (not in screen coordinates) */
		glm::uvec2 Size() const;

		const std::string &Title() const;
		std::string &Title();
	};

	/** returns the currently active window */
	Window *GetWindow();
}
