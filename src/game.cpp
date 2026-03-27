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
    // ship.FireLaser()

    //dont know <shipLaser>
    //manyLasers vector std::vector<shipLaser> manyLasers;
    
    for (auto& eachLaser: ship.ManyLasers){ 
        //shipLaser <-- DrawLaser
        eachLaser.DrawLaser();
    }

}

void MainGame::UpdateGame()
{

    //manyLasers vector std::vector<shipLaser> manyLasers;
    //ship.ManyLaser define vector in spaceship.hpp 
    for (auto& drawEachLaser: ship.ManyLasers){
        //get .update from shipLaser class in laser.hpp
        drawEachLaser.UpdateLaser();
    }

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

void MainGame::DeleteInactiveLasers()
{
    for (auto it = )
    
}
