#include "../headers/makeRect.hpp"
#include "../headers/vertexes.hpp"

Engine::DrawRect::DrawRect()
{
    this->shader = new Shader(vertexShaderSource, fragmentShaderSource);
    this->vertex = new Vertex();
    shader->compileVertexShader();
    shader->compileFragmentShader();
    shader->linkProgram();
    vertex->setupVertices(VAO, VBO, EBO);
}

void Engine::DrawRect::draw()
{
    // Use the shader program
        // Use the shader program
        shader->useProgram();

        // Bind the VAO
        glBindVertexArray(VAO);

        // Draw the rectangle
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        // Unbind the VAO
        glBindVertexArray(0);
}

Engine::DrawRect::~DrawRect()
{
    delete shader;
    delete vertex;
}