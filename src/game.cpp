#include "game.hpp"

// #include <iostream>

MainGame::MainGame(): gameEnemy({100, 50})
{
    //init gameEnemy with position of enemy in constructor list
    Obstacle = createEnemy();
}

MainGame::~MainGame()
{
}

void MainGame::DrawGame()
{
    //draws space ship 
    
    ship.DrawspaceShip();
    // ship.FireLaser()

    // gameEnemy.DrawEnemy();
    //dont know <shipLaser>
    //manyLasers vector std::vector<shipLaser> manyLasers;
    
    for (auto& eachLaser: ship.ManyLasers){ 
        //shipLaser <-- DrawLaser
        eachLaser.DrawLaser();
    }

    for (auto& bitchassniga : Obstacle)
    {
        bitchassniga.DrawEnemy();
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
//nigga optimization 
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

std::vector<enemyObstacle> MainGame::createEnemy()
{
    int enemyWidth = enemyObstacle::grid_for_enemy[0].size() * 3;
    float enemyGap = (GetScreenWidth() - (4 * enemyWidth)) / 5;

    for (int i = 0 ; i < 4; i++){
        float offsetX = (i + 1) * enemyGap + i * enemyWidth;
        Obstacle.push_back(enemyObstacle({offsetX ,float(GetScreenHeight() -250)}));
    }

    return Obstacle;
}
