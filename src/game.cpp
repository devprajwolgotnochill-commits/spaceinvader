#include "game.hpp"

MainGame::MainGame()
{

}
MainGame::~MainGame()
{

}

void MainGame::DrawGame()
{
    //draws space ship 
    ship.DrawspaceShip();

    // laser.DrawLaser();

}

void MainGame::UpdateGame()
{
    
    // laser.UpdateLaser();
}

void MainGame::HandleInput()
{
    if(IsKeyDown(KEY_A)||IsKeyDown(KEY_LEFT))
    {
        ship.MoveLeft();
    }

    if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
    {
        ship.MoveRight();
    }

    if (IsKeyDown(KEY_SPACE))
    {
        ship.FireLaser();
    }

}