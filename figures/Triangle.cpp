//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include "Triangle.h"
#include <cmath>

namespace figures
{
    Triangle::Triangle(float side) : side(side) {
    }

    float Triangle::getArea()
    {
        const auto result = (side * side * sqrt(3))/4;
        return roundf(result * 100.0f)/ 100.0f;
    }
}