#include "block.hpp"


block::block(Vector2 position_of_grides)
{
    this -> position_of_gride = position_of_grides;
}

void block::DrawBlock()
{
    DrawRectangle(position_of_gride.x ,position_of_gride.y , 3, 3, WHITE);
} 
