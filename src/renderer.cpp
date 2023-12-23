#include "../headers/renderer.hpp"

Engine::Renderer::Renderer()
{
    opengl = new Engine::Opengl();
    glew = new Engine::Glew();
    opengl->initOpengl();
}

void Engine::Renderer::makeWindow(int width, int height, const char* text)
{
    window = new Engine::Window();
    window->create_Window(width, height, text);
    glew->initGlew();
}

bool Engine::Renderer::closeWindow()
{
    return glfwWindowShouldClose(window->window);
}

void Engine::Renderer::beginDraw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Enable texture functionality
    glEnable(GL_TEXTURE_2D);
}

void Engine::Renderer::endDraw()
{
    // Disable texture functionality when done
    glDisable(GL_TEXTURE_2D);

    glfwSwapBuffers(window->window);
    glfwPollEvents();
}

void Engine::Renderer::setBgColour()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

Engine::Renderer::~Renderer()
{
    delete opengl;
    delete glew;
    delete window;
    delete drawRect;
}