//
// Created by Zxx on 2017-06-24.
//

#include "Rectangle.h"

namespace figures
{
    float figures::Rectangle::getArea()
    {
        return side1 * side2;
    }

    Rectangle::Rectangle(float side1, float side2) : side1{side1}, side2{side2}
    {
    }
}
