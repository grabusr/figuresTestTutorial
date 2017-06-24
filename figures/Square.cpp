//
// Created by grabusr on 24.06.17.
//

#include "Square.h"
#include <cmath>

namespace figures
{

float Square::getArea()
{
    const auto result = roundf(a * b *100.0f)/100.0f;
    return result;
}

}
