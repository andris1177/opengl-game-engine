// DrawRect.hpp
#pragma once

#include <GL/glew.h>
#include "../headers/shaders.hpp"
#include "../headers/vertex.hpp"
#include "../headers/log.hpp"

namespace Engine
{
    class DrawRect
    {
    public:
        DrawRect();
        ~DrawRect();
        void draw();

    private:
        GLuint VAO, VBO, EBO;
        Shader* shader;
        Vertex* vertex;
    };
}
