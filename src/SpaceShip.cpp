#include "SpaceShip.hpp"

spaceShip::spaceShip()
{
    //Loads img for Texture folder;
    image_of_spaceship = LoadTexture("Texture/spaceship.png"); 

    //use of vector from .hpp
    position_of_spaceship.x = (GetScreenWidth() - image_of_spaceship.width) /2;
    position_of_spaceship.y = (GetScreenHeight() -image_of_spaceship.height) /1.2;
 
}

//class spaceShip
spaceShip::~spaceShip()
{

    UnloadTexture(image_of_spaceship);

}

void spaceShip::DrawspaceShip()
{
    //draw
    DrawTextureV(image_of_spaceship ,position_of_spaceship ,WHITE);

}