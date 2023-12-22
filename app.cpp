#include "headers/opengl.hpp"
#include "headers/glew.hpp"
#include "headers/window.hpp"
#include "headers/drawRect.hpp"

int main()
{
    Engine::Opengl* opengl = new Engine::Opengl();
    Engine::Glew* glew = new Engine::Glew();
    Engine::Window* window = new Engine::Window();

    opengl->initOpengl();
    window->create_Window(640, 480, "game");
    glew->initGlew();

    Engine::DrawRect* drawrect = new Engine::DrawRect();

    while (!glfwWindowShouldClose(window->window))
    {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Enable texture functionality
        glEnable(GL_TEXTURE_2D);

        drawrect->draw();

        // Disable texture functionality when done
        glDisable(GL_TEXTURE_2D);

        glfwSwapBuffers(window->window);
        glfwPollEvents();
    }

    // delete
    delete opengl;
    delete glew;
    delete window;
    delete drawrect;
}