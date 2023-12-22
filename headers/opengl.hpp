#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../headers/log.hpp"
namespace Engine
{
    class Opengl
    {
    public:
    Opengl();
    ~Opengl();
    void initOpengl();
    void errorCheck();

    private:
        GLenum error;
    };
}