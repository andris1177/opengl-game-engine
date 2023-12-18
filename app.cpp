#include "headers/opengl.hpp"
#include "headers/glew.hpp"
#include "headers/window.hpp"
#include "headers/drawRect.hpp"

int main()
{
    Engine::Opengl* opengl = new Engine::Opengl();
    Engine::Window* window = new Engine::Window();
    Engine::DrawRect* drawrect = new Engine::DrawRect();
    Engine::Glew* glew = new Engine::Glew();

    opengl->initOpengl();
    glew->initGlew();
    window->create_Window(640, 480, "game");

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
    delete window;
}