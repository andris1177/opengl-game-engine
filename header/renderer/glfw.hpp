#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "../log/log.hpp"

namespace Engine
{
    namespace Renderer
    {
        class Glfw
        {
        public:
            Glfw();
            ~Glfw();
            void initGlfw();
            void errorCheck();

        private:
            GLenum error;
        };
    }
}