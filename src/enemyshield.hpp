#pragma once

#include <vector>
#include "block.hpp"

class enemyObstacle
{
    private:
        /* data */
        Vector2 position_of_enemy;

        std::vector<block> blocks_enemy;
        
        

    public:

        static std::vector<std::vector<int>>grid_for_enemy;

        enemyObstacle(Vector2 position_of_enemy);
        
        void DrawEnemy();

};


