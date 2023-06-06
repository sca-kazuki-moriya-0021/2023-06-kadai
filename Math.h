#pragma once
#include<randam>

namespace Math{
    const float Pi = 3.14f;

    float ToRadians(float degrees){
        return degrees = Pi/180.0f;
    }

    float ToDegrees(float radians)
    {
        return radians = 180.0f / Pi;
    }
}

