
#include <raylib.h>

// Global Variables 
int PLAYER_SCORE = 0;
int CPU_SCORE = 0;  





int main () {

    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;


    
 
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "PING PONG");
    SetTargetFPS(60);


    while (WindowShouldClose() == false){
        //Events
        



        //Update the game positions


        //check for collision 
        //check if the right side paddle is in contack with the ball

        
        //check if the left side paddle is in contack with the ball




        //Drawing shapes and pictures
        BeginDrawing();
        
            ClearBackground(BLACK);
            // DrawRectangle(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, Green);
            DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 150, WHITE);


            DrawLine(SCREEN_WIDTH /2 , 0 ,SCREEN_WIDTH /2 , SCREEN_HEIGHT ,WHITE);

            //draw score Text
            DrawText(TextFormat("%i" ,CPU_SCORE),SCREEN_WIDTH /4 -20, 20, 80,WHITE);
            DrawText(TextFormat("%i" ,PLAYER_SCORE),(3 * SCREEN_WIDTH) /4 -20, 20, 80,WHITE);
            DrawFPS(10, 10);
            
        EndDrawing();
    }

    CloseWindow();
}