//#pragma once does the same job as #ifndef / #define / #endif for moden compiler
#pragma once

#include <raylib.h>

//class spaceShip
class  spaceShip
{
    public:
        //functions for spaceShip 
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
