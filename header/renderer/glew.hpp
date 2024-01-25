#pragma once

#include <GL/glew.h>

#include "../log/log.hpp"

namespace Engine
{
    namespace Renderer
    {
        class Glew
        {
        public:
            Glew();
            ~Glew();
            void initGlew();
        };
    }
}