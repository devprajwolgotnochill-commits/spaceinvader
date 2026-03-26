#pragma once
#include <raylib.h>

class  spaceShip
{
    public:
        spaceShip();
        ~spaceShip();
        void Draw();
        void FireLaser();
        void MoveRight();
        void MoveLeft();

    private:
        Texture2D image_of_spaceship;
        Vector2 position_of_spaceship;
};
