//
// Created by grabusr on 24.06.17.
//

#include "Square.h"
#include <cmath>

namespace figures {

    float Square::getArea() {
        if (m_a < 0)
            return -1;
        return roundf((m_a * m_a) * 100.0f) / 100.0f;
    }

    Square::Square(float a) : m_a(a)
    {}

    Square::~Square() = default;

}
