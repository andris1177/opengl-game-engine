#pragma once
#include <GL/glew.h>
namespace Engine
{
    class Vertex
    {
    public:
        Vertex();
        ~Vertex();

    public:
        void setupVertices(GLuint& VAO, GLuint& VBO, GLuint& EBO);

    private:
        float vertices[12];
        unsigned int indices[6];
    };
} 
