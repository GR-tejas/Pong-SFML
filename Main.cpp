#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameLoop.h"
using namespace sf;
using namespace Core;

int main()
{
    // Step 1: Create the GameLoop object
    GameLoop* game_loop_manager = new GameLoop();

    // Step 2: Initialize the game environment
    game_loop_manager->Initialize();

    // Step 3: Run the game loop
    while (game_loop_manager->IsGameRunning())
    {
        game_loop_manager->PollEvent();
        game_loop_manager->Update();
        game_loop_manager->Render();
    }

    return 0;
}