#pragma once
#include <raylib.h>


class block
{
private:
    /* data */
    Vector2 position_of_gride;

public:
        
    block(Vector2 position_of_grides);
    void DrawBlock();
};
