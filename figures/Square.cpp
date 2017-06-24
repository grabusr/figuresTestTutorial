//
// Created by grabusr on 24.06.17.
//

#include "Square.h"

namespace figures {

    float Square::getArea() {
        return a * a;
    }

    Square::Square(float a) {
        this->a = a;
    }

}
