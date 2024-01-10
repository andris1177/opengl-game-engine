#include "../headers/renderer.hpp"
int main()
{
    Engine::Renderer *renderer = new Engine::Renderer();
    renderer->makeWindow(640, 480, "game");
    Engine::DrawRect * rect = new Engine::DrawRect();
    
    while (!renderer->closeWindow())
    {
        renderer->beginDraw();
        renderer->setBgColour(renderer->red);
        rect->draw();
        renderer->endDraw();
    }

    // delete
    delete rect;
    delete renderer;
}