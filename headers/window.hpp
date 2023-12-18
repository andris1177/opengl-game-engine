#pragma once
#include <GLFW/glfw3.h>
namespace Engine
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