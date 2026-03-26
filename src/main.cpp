#include <raylib.h>


int main () {

    SetTraceLogLevel(LOG_NONE);
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "PING PONG");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){

        //Events
        



        //Update the game positions




        //Drawing shapes and pictures
        BeginDrawing();
        
            ClearBackground(BLACK);

            DrawFPS(10, 10);
            
        EndDrawing();

    }

    CloseWindow();
    return 0;
}