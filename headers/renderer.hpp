#pragma once
#include "../headers/opengl.hpp"
#include "../headers/glew.hpp"
#include "../headers/window.hpp"
#include "../headers/makeRect.hpp"
#include "../headers/log.hpp"
#include <glm/glm.hpp> 
namespace Engine
{
    class Renderer
    {
    public:
        Renderer();
        ~Renderer();

    private:
        Opengl* opengl;
        Glew* glew;
        Window* window;
        int screenWidth;
        int screenHeight;
        int windowText;
        glm::vec4 bgColour;

    public:
        void makeWindow(int width, int height, const char* text);
        bool closeWindow();
        void beginDraw();
        void endDraw();
        void setBgColour(const glm::vec4& colour);

    public:
        const glm::vec4 black = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
        const glm::vec4 red = glm::vec4(1.0f, 0.0f, 0.0f, 1.0f);
        const glm::vec4 green = glm::vec4(0.0f, 1.0f, 0.0f, 1.0f);
        const glm::vec4 blue = glm::vec4(0.0f, 0.0f, 1.0f, 1.0f);
        const glm::vec4 yellow = glm::vec4(1.0f, 1.0f, 0.0f, 1.0f);
        const glm::vec4 magenta = glm::vec4(1.0f, 0.0f, 1.0f, 1.0f);
        const glm::vec4 cyan = glm::vec4(0.0f, 1.0f, 1.0f, 1.0f);
        const glm::vec4 white = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
        const glm::vec4 gray = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
        const glm::vec4 orange = glm::vec4(1.0f, 0.5f, 0.0f, 1.0f);
    };
}