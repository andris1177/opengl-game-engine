#include "../../header/renderer/glfw.hpp"

Engine::Renderer::Glfw::Glfw()
{
    
}

void Engine::Renderer::Glfw::initGlfw()
{
    if (!glfwInit())
    Engine::Log::TerminalLog::Print(2, "Failed to initalize glfw(opengl)");

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void Engine::Renderer::Glfw::errorCheck()
{
    error = glGetError();
    if (error != GL_NO_ERROR) 
    {
        Engine::Log::TerminalLog::Print(2, "OpenGL error: " + std::to_string(error));
    }
    
    if (!glIsEnabled(GL_TEXTURE_2D)) 
    {
        Engine::Log::TerminalLog::Print(1, "GL_TEXTURE_2D is not enabled!");
        glEnable(GL_TEXTURE_2D);
    }

}

Engine::Renderer::Glfw::~Glfw()
{
    glfwTerminate();
}