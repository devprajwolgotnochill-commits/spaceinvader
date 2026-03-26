#pragma once
#ifndef SPACE_SHIP
#define SPACE_SHIP

#include <raylib.h>

class  spaceShip
{
    public:
        //functions  
        spaceShip();
        ~spaceShip();
        void Draw();
        void FireLaser();
        void MoveRight();
        void MoveLeft();

    
    private:
        //img and position
        Texture2D image_of_spaceship;
        Vector2 position_of_spaceship;
};


#endif