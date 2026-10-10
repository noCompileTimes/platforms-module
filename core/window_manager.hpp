#pragma once

#include <memory>

#include "base/window.hpp"

namespace core
{
    class WindowManager
    {
    private:
        std::unique_ptr<base::Window> _window;
    };
}
