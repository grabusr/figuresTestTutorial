//
// Created by grabusr on 24.06.17.
//

#include "Square.h"

namespace figures {

    float Square::getArea() {
        return m_a * m_a;
    }

    Square::Square(float a) : m_a(a) {

    }

    Square::~Square() {

    }

}
