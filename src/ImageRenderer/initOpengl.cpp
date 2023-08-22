#include "../../headers/imageRenderer/initOpengl.hpp"
#include "../../headers/log/log.hpp"
#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

namespace Engine
{
    initOpengl::initOpengl()
    {
        run();
    }

    void initOpengl::initGlfw()
    {
        if( !glfwInit() )
        {
            Log::Print(2, "Failed to initialize GLFW" );
        }
    }

    void initOpengl::initWindow()
    {
        window = glfwCreateWindow( 1024, 768, "Tutorial 01", NULL, NULL);
        if( window == NULL )
        {
            Log::Print( 2, "Failed to open GLFW window. ." );
            glfwTerminate();
        }
        glfwMakeContextCurrent(window);
    }

    void initOpengl::initGlew()
    {
        glewExperimental=true; 
        if (glewInit() != GLEW_OK) 
        {
           Log::Print(2, "Failed to initialize GLEW");
        }
    }

    void initOpemgl::run()
    {
        initGlfw();
        initWindow();
        initGlew();
        createVertex();
    }

    GLFWwindow* initOpengl::returnWindow()
    {
        return window;
    }

    initOpengl::~initOpengl()
    {

    }
}