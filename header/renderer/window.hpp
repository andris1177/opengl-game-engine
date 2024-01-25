#pragma once

#include <GLFW/glfw3.h>

#include "../log/log.hpp"

namespace Engine
{
    namespace Renderer
    {
        class Window
        {
        public:
            Window();
            ~Window();
            void create_Window(int width, int height, const char* title);
            GLFWwindow* window;
        };
    }
}