#pragma once
#include <raylib.h>

class shipLaser
{
    private:
        Vector2 LaserPosition ;
        float LaserSpeed ;
    
    public:

        shipLaser(Vector2 position ,int speed);

        void UpdateLaser();
        void DrawLaser();
        bool ActiveLaser;
};
 
 