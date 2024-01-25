#include "header/renderer/rendererManager.hpp"

int main()
{
    Engine::Renderer::RendererManager *rendermanager = new Engine::Renderer::RendererManager();
    rendermanager->makeWindow(640, 480, "Engine");

    while (!rendermanager->closeWindow())
    {
        rendermanager->beginDraw();
        rendermanager->setBgColour(rendermanager->cyan);
        rendermanager->endDraw();
    }

    delete rendermanager;
}