//
// Created by grabusr on 24.06.17.
//

#include "Square.h"
#include <math.h>

namespace figures
{

Square::Square()
{
    // empty
}

Square::Square(int a_Side) : m_Side(a_Side)
{
    // empty
}

float Square::getArea()
{
    if (m_Side < 0) {
        return 0;
    }

    const auto result = m_Side * m_Side;
    return roundf(result * 100.0f) / 100.f;
}

}
