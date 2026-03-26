#include "game.hpp"

MainGame::MainGame()
{

}
MainGame::~MainGame()
{

}

void MainGame::DrawGame()
{
    ship.DrawspaceShip();
}

void MainGame::UpdateGame()
{
}

void MainGame::HandleInput()
{
    if(IsKeyDown(KEY_A)){ship.MoveLeft();}

    if (IsKeyDown(KEY_D)){ship.MoveRight();}

}