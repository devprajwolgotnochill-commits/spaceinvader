#include <raylib.h>
#include "SpaceShip.hpp"


int main () {

    SetTraceLogLevel(LOG_NONE);
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "PING PONG");
    SetTargetFPS(60);

    spaceShip ship;

    while (WindowShouldClose() == false){

        //Events
        



        //Update the game positions




        //Drawing shapes and pictures
        BeginDrawing();
        
            ClearBackground(BLACK);

            ship.Draw();

            DrawFPS(10, 10);
            
        EndDrawing();

    }

    CloseWindow();
    return 0;
}