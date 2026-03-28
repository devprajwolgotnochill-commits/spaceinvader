#pragma once

#include <vector>
#include "block.hpp"

class enemy
{
    private:
        /* data */
        Vector2 position_of_enemy;
        std::vector<block> blocks_enemy;
        std::vector<std::vector<int>>grid_for_enemy;
        

    public:
        
        enemy(Vector2 position_of_enemy);
        void DrawEnemy();

};


