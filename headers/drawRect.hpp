#pragma once
#include <GL/glew.h>
namespace Engine
{
    class DrawRect
    {
    public:
        DrawRect();
        ~DrawRect();
        void draw();

    private:
        void shaders();
        void vertexes();

    private:
        GLuint vertexShader;
        GLint success;
        GLchar infoLog[512];
        GLuint fragmentShader;
        GLuint shaderProgram;
        GLuint VAO, VBO, EBO;
    };
} 
