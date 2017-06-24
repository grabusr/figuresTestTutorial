//
// Created by user on 24.06.17.
//

#include "Rectange.h"
#include <cmath>

namespace figures
{

    float Rectangle::getArea()
    {
        const auto result = roundf(a * b *100.0f)/100.0f;
        return result;
    }

}