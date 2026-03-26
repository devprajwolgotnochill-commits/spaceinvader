
#include <raylib.h>

// Global Variables 
int PLAYER_SCORE = 0;
int CPU_SCORE = 0;  

// Colours
Color Green = Color{38, 185, 154, 255};
Color Dark_Green = Color{20, 160, 133, 255};
Color Light_Green = Color{129, 204, 184, 255};
Color Yellow = Color{243, 213, 91, 255};

class Ball
{

    public:
    float x,y;
    float speed_x ,speed_y;
    int radius;

    void Draw(){
        DrawCircle(x ,y , radius ,Yellow);
    }
    void resetBall(){
            y = GetScreenHeight()/2;
            x = GetScreenWidth()/2;

            int speed_choices[2] = {1 ,-1};

            speed_x = 6 * speed_choices[GetRandomValue(0, 1)];
            speed_y = 6 * speed_choices[GetRandomValue(0, 1)];
        }

    void Update(){
        x +=speed_x;
        y +=speed_y; 
        
        //top bottom collisoin
        if (y + radius >= GetScreenHeight() || y - radius <= 0){
            speed_y *= -1;
        }

        //Left right collisoin
        if (x + radius >= GetScreenWidth())//Cpu wins
        {
            CPU_SCORE += 1;
            resetBall();
        }
        if (x - radius <= 0)
        {
            PLAYER_SCORE += 1;
            resetBall();
        }
    }
    
};

class Paddle{
    protected:
    //the paddle doesn't go outside the window 
    void LimitMovement(){
        
        if (y <=0 )
        {
                y = 0;
        }
        if (y +height >= GetScreenHeight()){
            y = GetScreenHeight() -height;
        }
    };

    public:
        float x ,y;
        float width ,height;
        int speed;

        // DrawRectangle();
        void Drawpaddle(){
            DrawRectangle(x ,y ,width ,height ,WHITE); // left paddle
            // DrawRectangle(); // -25-20 =-35 // right paddle
        }
        void Update(){
            if (IsKeyDown(KEY_UP)){
                y -= speed;
            }
            if (IsKeyDown(KEY_DOWN)){
                y += speed;
            }
            LimitMovement();
        }



};

class CpuPaddle :public Paddle
{
    public:

    //basic ai algorithih to make the cpu follow the tragity of the ball
    void Update(float ball_y)
    {
        if (y + height /2 > ball_y){
            y -= speed;
        }
        if (y + height /2 < ball_y){
            y += speed;
        }
        LimitMovement();
    }
};


int main () {

    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;


    //class 
    Ball ball;
    //class ball 
    ball.radius = 15;

    ball.x = SCREEN_WIDTH /2 ;
    ball.y = SCREEN_HEIGHT /2;

    ball.speed_x = 6.0f;
    ball.speed_y = 6.0f;

    //class Paddle
    Paddle Player;
    //player 
    Player.width =25;
    Player.height = 120;
    Player.x = SCREEN_WIDTH - Player.width -10; //same as
    Player.y = SCREEN_HEIGHT /2 - Player.height /2;
    Player.speed = 6;

    //class CpuPaddle
    CpuPaddle cpu;
    // initilizing using player as base class (Ineriting from class player to -----> CpuPaddle )
    cpu.height = 120;
    cpu.width =25;
    cpu.x =10;
    cpu.y =SCREEN_HEIGHT /2 - cpu.height /2;
    cpu.speed = Player.speed + 1;


    
 
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "PING PONG");
    SetTargetFPS(60);


    while (WindowShouldClose() == false){
        //Events
        



        //Update the game positions
        ball.Update();
        Player.Update();
        cpu.Update(ball.y);

        //check for collision 
        //check if the right side paddle is in contack with the ball
        if (CheckCollisionCircleRec
            (Vector2{ball.x ,ball.y} ,ball.radius ,Rectangle{Player.x ,Player.y ,Player.width ,Player.height}))
            {
                ball.speed_x *= -1;
            }
        
        //check if the left side paddle is in contack with the ball
        if (CheckCollisionCircleRec
            (Vector2{ball.x ,ball.y} ,ball.radius ,Rectangle{cpu.x ,cpu.y ,cpu.width ,cpu.height}))
            {
                ball.speed_x *= -1;
            }



        //Drawing shapes and pictures
        BeginDrawing();
        
            ClearBackground(BLACK);
            // DrawRectangle(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, Green);
            DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 150, Light_Green);


            DrawLine(SCREEN_WIDTH /2 , 0 ,SCREEN_WIDTH /2 , SCREEN_HEIGHT ,WHITE);

            Player.Drawpaddle();
            ball.Draw();
            cpu.Drawpaddle();

            //draw score Text
            DrawText(TextFormat("%i" ,CPU_SCORE),SCREEN_WIDTH /4 -20, 20, 80,WHITE);
            DrawText(TextFormat("%i" ,PLAYER_SCORE),(3 * SCREEN_WIDTH) /4 -20, 20, 80,WHITE);
            DrawFPS(10, 10);
            
        EndDrawing();
    }

    CloseWindow();
}