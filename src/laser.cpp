#include "laser.hpp"
// #include <iostream>

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
            // std::cout << "Laser deleted";

        }
        
    }
}

void shipLaser::DrawLaser()
{
    if(ActiveLaser){
        DrawRectangle(LaserPosition.x , LaserPosition.y, 4 , 15, WHITE);
    }
}

