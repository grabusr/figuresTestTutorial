//
// Created by mattrex on 24.06.17.
//

#include "Rectangle.h"
#include <cmath>

namespace figures {

    float figures::Rectangle::getArea() {
        return roundf((m_a * m_b) * 100.0f) / 100.0f;
    }

    figures::Rectangle::Rectangle(float a, float b) : m_a(a),
                                                      m_b(b)
    {}

    Rectangle::~Rectangle() {

    }
}