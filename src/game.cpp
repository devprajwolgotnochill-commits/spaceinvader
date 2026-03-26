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
    if(IsKeyDown(KEY_A)||IsKeyDown(KEY_LEFT))
    {
        ship.MoveLeft();
    }

    if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
    {
        ship.MoveRight();
    }

}