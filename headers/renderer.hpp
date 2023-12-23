#pragma once
#include "../headers/opengl.hpp"
#include "../headers/glew.hpp"
#include "../headers/window.hpp"
#include "../headers/makeRect.hpp"
#include "../headers/log.hpp"
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
        DrawRect* drawRect;
        int screenWidth;
        int screenHeight;
        int windowText;

    public:
        void makeWindow(int width, int height, const char* text);
        bool closeWindow();
        void beginDraw();
        void endDraw();
        void setBgColour();
    };
}