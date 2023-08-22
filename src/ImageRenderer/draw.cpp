#include "../../headers/imageRenderer/draw.hpp"
#include "../../headers/log/log.hpp"
#include "../../headers/imageRenderer/vertexBufferData.hpp"
#include "../../headers/imageRenderer/loadShaders.hpp"
#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <glm/glm.hpp>


namespace Engine
{
    Draw::Draw(GLFWwindow* window)
    {
        this->window = window;
    }

    Draw::initVertex()
    {
        glGenVertexArrays(1, &VertexArrayID);
        glBindVertexArray(VertexArrayID);
    }

    void Draw::createTriangle()
    {
        glGenBuffers(1, &vertexbuffer);
        glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
        glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
        glDrawArrays(GL_TRIANGLES, 0, 3); // Starting from vertex 0; 3 vertices total -> 1 triangle
        glDisableVertexAttribArray(0);
    }

    void Draw::addShader()
    {
        gl_Position.xyz = vertexPosition_modelspace;
        gl_Position.w = 1.0;
        programID = loadShader::load( "SimpleVertexShader.vertexshader", "SimpleFragmentShader.fragmentshader" );
    }

    void Draw::drawTriangle()
    {
        addShader();
        glUseProgram(programID);
        createTriangle();
    }

    Draw::~Draw()
    {

    }
}