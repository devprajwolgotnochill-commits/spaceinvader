#pragma once
#include "SpaceShip.hpp"
#include "laser.hpp"
#include "block.hpp"
#include "enemy.hpp"

class MainGame
{
  public:
    MainGame();
    ~MainGame();
    void DrawGame();
    void UpdateGame();
    void HandleInput();
  
  private:
    spaceShip ship;//here <-- space .hpp
    enemy gameEnemy;
  //draw laser
  // shipLaser laser = shipLaser({100 ,100} , -6.7);
    void DeleteInactiveLasers();



};
