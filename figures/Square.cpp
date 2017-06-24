//
// Created by grabusr on 24.06.17.
//

#include "Square.h"
#include <cmath>

namespace figures {

    float Square::getArea() {
        return roundf((m_a * m_a) * 100.0f) / 100.0f;
    }

    Square::Square(float a) : m_a(a) {

    }

    Square::~Square() {

    }

}
