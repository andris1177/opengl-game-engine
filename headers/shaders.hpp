#pragma once
#include <GL/glew.h>
#include "../headers/log.hpp"
namespace Engine
{
    class Shader
    {
    public:
        Shader(const char* vertexSource, const char* fragmentSource);
        ~Shader();

    public:
        void compileVertexShader();
        void compileFragmentShader();
        void linkProgram();
        GLuint useProgram();

    private:
        GLuint vertexShader;
        GLuint fragmentShader;
        GLuint shaderProgram;
        GLchar infoLog[512];
        GLint success;
        const char* vertexSource;
        const char* fragmentSource;
    };
}