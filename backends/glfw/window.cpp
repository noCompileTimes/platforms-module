#include "window.hpp"

namespace backends::glfw
{
    auto Window::create(const core::window::configuration& configuration) -> void
    {
        glfwInit();

        if (configuration.debug)
        {
            // TODO check if is still 100% needed on modern opengl machines
            glfwWindowHint(GLFW_CONTEXT_DEBUG, GLFW_TRUE);
        }

        glfwWindowHint(GLFW_SAMPLES, configuration.samples);

        _handle = glfwCreateWindow(configuration.width, configuration.height, configuration.name.data(), nullptr, nullptr);

        glfwMakeContextCurrent(_handle);
    }

    auto Window::destroy() -> void
    {
        glfwDestroyWindow(_handle);

        glfwTerminate();
    }

    auto Window::swap_buffers() -> void
    {
        glfwSwapBuffers(_handle);
    }

    auto Window::handle() -> std::any
    {
        return _handle;
    }
}
