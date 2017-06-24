//
// Created by RAB on 24.06.2017.
//

#include "Circle.h"
#include <math.h>

namespace figures
{
    float Circle::getArea() {
        float result = (float) (M_PI * r * r);
        return roundf(result * 100.0f) / 100.f;

    }

    Circle::~Circle() {

    }

    Circle::Circle(float radius) {
        r = radius;
    }
}

