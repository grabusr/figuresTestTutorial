//
// Created by RAB on 24.06.2017.
//

#include "Triangle.h"
#include <math.h>

namespace figures
{
    Triangle::Triangle(float side) {
        a = side;
    }

    Triangle::~Triangle() {

    }

    float Triangle::getArea()
    {
        float result = (float) (pow(a, 2) * sqrt(3) / 4);
        return roundf(result * 100.0f) / 100.f;
    }
}