#include "../../header/renderer/window.hpp"

Engine::Renderer::Window::Window()
{

}

void Engine::Renderer::Window::create_Window(int width, int height, const char* title)
{
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        Engine::Log::TerminalLog::Print(2, "The window failed to oppen");
    }

    glfwMakeContextCurrent(window);
    glViewport(0, 0, width, height);
}

Engine::Renderer::Window::~Window()
{

}