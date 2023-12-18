#include "../headers/window.hpp"
#include "../headers/log.hpp"
#include <GLFW/glfw3.h>

Engine::Window::Window()
{

}

void Engine::Window::create_Window(int width, int height, const char* title)
{
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        Log::Print(2, "The window failed to oppen");
    }

    glfwMakeContextCurrent(window);
    glViewport(0, 0, width, height);
}

Engine::Window::~Window()
{

}