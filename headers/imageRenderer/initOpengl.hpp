#pragma once
#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

namespace Engine
{
    class initOpengl
    {
    public:
        initOpengl();
        ~initOpengl();

    private:
        void initGlfw();
        void initWindow();
        void initGlew();
        void run();
        GLFWwindow* returnWindow();

    private:
        GLFWwindow* window
    };
}