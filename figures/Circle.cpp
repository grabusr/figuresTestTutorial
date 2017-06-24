//
// Created by mily on 24.06.17.
//

#include "Circle.h"
#include <math.h>

namespace figures
{

Circle::Circle()
{
    // empty
}

Circle::Circle(int a_Radius) : m_Radius(a_Radius)
{
    // empty
}

float Circle::getArea()
{
    if (m_Radius < 0) {
        return 0;
    }
    auto result = M_PI * m_Radius * m_Radius;

    return roundf(result * 100.0f) / 100.f;
}

} // figures