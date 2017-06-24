//
// Created by RAB on 24.06.2017.
//

#include "Circle.h"
#include <math.h>

namespace figures
{
    float Circle::getArea() {
        return (float) (M_PI * r * r);
    }

    Circle::~Circle() {

    }

    Circle::Circle(float radius) {
        r = radius;
    }
}

