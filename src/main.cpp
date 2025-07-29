// libraries
#include <raylib.h>
#include <raymath.h>

// classes
#include "game.h"

// constants
#include "colors.h"
#include "config.h"

int main() 
{
    
    InitWindow(screenWidth, screenHeight, "RPG");
    SetTargetFPS(60);
    
    Game game = Game();

    while (!WindowShouldClose())
    {
        game.Update();

        BeginDrawing();
        ClearBackground(darkBlue);
        
        game.Render();

        EndDrawing();
    }
    CloseWindow();

    return 0;
}