#include "../headers/shaders.hpp"

Engine::Shader::Shader(const char* vertexSource, const char* fragmentSource)
{
    this->vertexSource = vertexSource;
    this->fragmentSource = fragmentSource;
}

void Engine::Shader::compileVertexShader()
{
    // Vertex Shader
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexSource, NULL);
    glCompileShader(vertexShader);

    // Check for shader compilation errors
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success) 
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        Log::Print(2, "Vertex shader compilation failed:");
        Log::Print(2, infoLog);
    }
}

void Engine::Shader::compileFragmentShader()
{
    // Fragment Shader
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
    glCompileShader(fragmentShader);

    // Check for shader compilation errors
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success) 
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        Log::Print(2, "Fragment shader compilation failed:");
        Log::Print(2, infoLog);
    }
}

void Engine::Shader::linkProgram()
{
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    // Check for linking errors
    GLint success;
    char infoLog[512];
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
    }
}

GLuint Engine::Shader::useProgram()
{
    glUseProgram(shaderProgram);
    return shaderProgram;
}

Engine::Shader::~Shader()
{

}