//
// Created by grabusr on 24.06.17.
//

#include <cmath>
#include "Square.h"

namespace figures {

    float Square::getArea() {
        return std::round(a * a * 100) / 100;
    }

    Square::Square(float a) {
        this->a = a;
    }

}
