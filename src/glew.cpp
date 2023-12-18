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
        Log::Print(2, "Failed to load glew");
    }
}

Engine::Glew::~Glew()
{

}