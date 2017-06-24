//
// Created by Tomasz Czubocha on 24.06.2017.
//
#include <cmath>
#include "triangle.h"

namespace figures {

    float Triangle::getArea() {
        return (float) (std::round((a * a * sqrt(3) / 4) * 100) / 100);
    }

    Triangle::Triangle(float a) {
        this->a = a;
    }

}
