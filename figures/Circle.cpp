//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include "Circle.h"
#include <cmath>

namespace figures
{

    float Circle::getArea()
    {
        return roundf(M_PI * radius * radius * 100.0f)/100.0f;
    }

    Circle::Circle(float radius) : radius(radius) {

    }

}
