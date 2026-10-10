#pragma once

#include "core/base/window_factory.hpp"

namespace backends::glfw
{
    class WindowFactory : public core::base::WindowFactory
    {
    public:
        auto create_window() -> std::unique_ptr<core::base::Window> override;
    };
}
