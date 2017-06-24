//
// Created by Home on 2017-06-24.
//

#include "Circle.h"
#include <math.h>
#include <cmath>
namespace figures {

    float Circle::getArea() {
        const auto result = M_PI*radius*radius;
        return std::roundf(result*100.0f)/100.0f;
    }

}