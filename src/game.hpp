#pragma once
#include "SpaceShip.hpp"

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

};
