#pragma once
#include <vector>

class Enemy{
    public:
    Enemy(class Game* game);
    ~Enemy();

     enum State
    {
        EActive,
        EDead
    };

};