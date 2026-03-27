#include "game.hpp"
// #include <iostream>

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

    //unoptimized to use it in while loop because deleting allocatin can eat resource 
    DeleteInactiveLasers(); 

    // std::cout<<"Size :" <<ship.ManyLasers.size()<<std::endl;

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

//made to delete the inactive or empty vector but i think i dont need to 
void MainGame::DeleteInactiveLasers()
{
    if (ship.ManyLasers.size() > 256){
        for (auto dellaser = ship.ManyLasers.begin(); dellaser != ship.ManyLasers.end();)
        {
            if (!dellaser -> ActiveLaser){
                dellaser = ship.ManyLasers.erase(dellaser);
            } else{
                ++ dellaser;
            }
        }
    }
    
}
