#include "SpaceShip.hpp"

spaceShip::spaceShip()
{
    image_of_spaceship = LoadTexture("");

}

spaceShip::~spaceShip()
{

    UnloadTexture(image_of_spaceship);
    
}

void spaceShip::Draw()
{
    DrawTextureV(image_of_spaceship ,position_of_spaceship ,WHITE);
}