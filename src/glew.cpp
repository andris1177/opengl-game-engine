#include <GL/glew.h>
#include "../headers/glew.hpp"
#include "../headers/log.hpp"

Engine::Glew::Glew()
{

}

void Engine::Glew::initGlew()
{
    if (glewInit() != GLEW_OK) 
    {
        const char* errorString = reinterpret_cast<const char*>(glewGetErrorString(glewInit()));
        Log::Print(2, "Failed to load GLEW: " + std::string(errorString));
    }
}

Engine::Glew::~Glew()
{

}