#include "SpaceShip.hpp"

spaceShip::spaceShip()
{
    //Loads img for Texture folder;
    image_of_spaceship = LoadTexture("Texture/spaceship.png"); 

    //use of vector from .hpp
    position_of_spaceship.x = 200;
    position_of_spaceship.y = 100;
 
}

//class spaceShip
spaceShip::~spaceShip()
{

    UnloadTexture(image_of_spaceship);

}

void spaceShip::Draw()
{
    //draw
    DrawTextureV(image_of_spaceship ,position_of_spaceship ,WHITE);

}