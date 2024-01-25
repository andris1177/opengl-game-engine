#include "../../header/renderer/glew.hpp"

Engine::Renderer::Glew::Glew()
{

}

void Engine::Renderer::Glew::initGlew()
{
    if (glewInit() != GLEW_OK) 
    {
        const char* errorString = reinterpret_cast<const char*>(glewGetErrorString(glewInit()));
        Engine::Log::TerminalLog::Print(2, "Failed to load GLEW: " + std::string(errorString));
    }
}

Engine::Renderer::Glew::~Glew()
{

}