#include "../headers/vertex.hpp"

Engine::Vertex::Vertex()
{
    vertices[0] = 0.5f; vertices[1] = 0.5f; vertices[2] = 0.0f;  // top right
    vertices[3] = 0.5f; vertices[4] = -0.5f; vertices[5] = 0.0f;  // bottom right
    vertices[6] = -0.5f; vertices[7] = -0.5f; vertices[8] = 0.0f;  // bottom left
    vertices[9] = -0.5f; vertices[10] = 0.5f; vertices[11] = 0.0f;  // top left

    indices[0] = 0; indices[1] = 1; indices[2] = 3;  // first triangle
    indices[3] = 1; indices[4] = 2; indices[5] = 3;  // second triangle
}

void Engine::Vertex::setupVertices(GLuint& VAO, GLuint& VBO, GLuint& EBO)
{    
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    // Bind the Vertex Array Object first, then bind and set vertex buffer(s) and attribute pointer(s)
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glBindVertexArray(0);
}

Engine::Vertex::~Vertex()
{

}