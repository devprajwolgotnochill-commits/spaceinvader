#pragma once
#include "SpaceShip.hpp"
#include "enemy.hpp"

class MainGame
{
  public:
    MainGame();
    ~MainGame();
    void DrawGame();
    void UpdateGame();
    void HandleInput();
    std::vector<enemyObstacle> createEnemy();
  
  private:
    spaceShip ship;//here <-- space .hpp
    // enemyObstacle gameEnemy;

    enemyObstacle gameEnemy;
    void DeleteInactiveLasers();

    

    std::vector<enemyObstacle> Obstacle;

};
