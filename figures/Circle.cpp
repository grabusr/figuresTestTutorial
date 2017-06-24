//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include "Circle.h"
#include <cmath>

namespace figures
{
    Circle::Circle(float radius) : radius(radius) {
    }

    float Circle::getArea()
    {
        const auto result = M_PI * radius * radius;
        return roundf(result * 100.0f)/100.0f;
    }
}
