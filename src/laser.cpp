#include "laser.hpp"

shipLaser::shipLaser(Vector2 LaserPosition, int LaserSpeed)
{
    this -> LaserPosition = LaserPosition;
    this -> LaserSpeed = LaserSpeed;
    ActiveLaser = true;
}

void shipLaser::UpdateLaser()
{
    LaserPosition.y += LaserSpeed;
    if(ActiveLaser){
        if (LaserPosition.y > GetScreenHeight() || LaserPosition.y < 0)
        {
            ActiveLaser = false;
            // std::cout << "Laser deleted";used for dih buggeng

        }
        
    }
}

void shipLaser::DrawLaser()//used in for loop 
{
    if(ActiveLaser){
        DrawRectangle(LaserPosition.x , LaserPosition.y, 4 , 15, WHITE);
    }
}

