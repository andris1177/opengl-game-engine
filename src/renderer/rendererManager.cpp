#include "../../header/renderer/rendererManager.hpp"

Engine::Renderer::RendererManager::RendererManager()
{
    glfw = new Engine::Renderer::Glfw();
    glew = new Engine::Renderer::Glew();
    glfw->initGlfw();
}

void Engine::Renderer::RendererManager::makeWindow(int width, int height, const char* text)
{
    window = new Engine::Renderer::Window();
    window->create_Window(width, height, text);
    glew->initGlew();
}

bool Engine::Renderer::RendererManager::closeWindow()
{
    return glfwWindowShouldClose(window->window);
}

void Engine::Renderer::RendererManager::beginDraw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Enable texture functionality
    glEnable(GL_TEXTURE_2D);
}

void Engine::Renderer::RendererManager::endDraw()
{
    // Disable texture functionality when done
    glDisable(GL_TEXTURE_2D);

    glfwSwapBuffers(window->window);
    glfwPollEvents();
}

void Engine::Renderer::RendererManager::setBgColour(const glm::vec4& colour)
{
    bgColour = colour;
    glClearColor(bgColour.r, bgColour.g, bgColour.b, bgColour.a);
}

Engine::Renderer::RendererManager::~RendererManager()
{
    delete glfw;
    delete glew;
    delete window;
}