#pragma once
#include "../headers/log.hpp"
#include <GL/glew.h>
namespace Engine 
{
    class Glew 
    {
    public:
        Glew();
        ~Glew();
        void initGlew();
    };
}
