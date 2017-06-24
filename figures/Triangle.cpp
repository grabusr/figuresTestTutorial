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
        return (float) (pow(a, 2) * sqrt(3) / 4);
    }
}