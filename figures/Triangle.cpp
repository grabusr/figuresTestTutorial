//
// Created by Tomasz Czubocha on 24.06.2017.
//
#include <cmath>
#include "triangle.h"

namespace figures {

    float Triangle::getArea() {
        return (float) (a * a * sqrt(3) / 4);
    }

    Triangle::Triangle(float a) {
        this->a = a;
    }

}
