#include <raylib.h>
#include "game.hpp"

int main () {

    //constants
    const int SCREEN_WIDTH = 750;
    const int SCREEN_HEIGHT = 750;


    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "spaceinvaders");
    SetTargetFPS(60);

    MainGame game;

    while (WindowShouldClose() == false){

        //Events
        



        //Update the game positions
        game.HandleInput();




        //Drawing shapes and pictures
        BeginDrawing();
        
            ClearBackground(BLACK);

              game.DrawGame();

            // DrawFPS(10, 10);
            
        EndDrawing();

    }

    CloseWindow();
    // return 0;
}