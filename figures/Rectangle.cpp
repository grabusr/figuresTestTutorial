//
// Created by mattrex on 24.06.17.
//

#include "Rectangle.h"

namespace figures {

    float figures::Rectangle::getArea() {
        return m_a * m_b;
    }

    figures::Rectangle::Rectangle(float a, float b) : m_a(a),
                                                      m_b(b)
    {}
}