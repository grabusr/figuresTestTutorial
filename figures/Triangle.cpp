//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include "Triangle.h"
#include <cmath>

namespace figures
{

    float Triangle::getArea()
    {
        return roundf((side * side * sqrt(3))/4 * 100.0f)/ 100.0f;
    }

    Triangle::Triangle(float side) : side(side) {

    }
}