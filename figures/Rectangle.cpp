//
// Created by marta on 24.06.17.
//

#include "Rectangle.h"

namespace figures
{

float figures::Rectangle::getArea()
{
    return area;
}


    Rectangle::Rectangle(float dimension_x, float dimension_y):dimension_x(dimension_x),
                                                               dimension_y(dimension_y)
    {area=dimension_x*dimension_y;}
}
