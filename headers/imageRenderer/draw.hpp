#pragma once
#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

namespace Engine
{
    class Draw
    {
    public:
        Draw(GLFWwindow* window);
        ~Draw();

    private:
        void initVertex();
        void createTriangle();
        void addShader();
        void drawTriangle();

    private:
        GLFWwindow* window;
        GLuint VertexArrayID;
        GLuint vertexbuffer;
        GLuint programID
    };
}