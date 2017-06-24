//
// Created by marta on 24.06.17.
//

#ifndef PRIMESCALCULATOR_RECTANGLE_H
#define PRIMESCALCULATOR_RECTANGLE_H

#include "IFigure.h"

namespace figures
{


class Rectangle : public IFigure
{
    float dimension_x;
    float dimension_y;
    float area;

public:
    Rectangle(float dimension_x,float dimension_y);
    float getArea() override;
};

}

#endif //PRIMESCALCULATOR_RECTANGLE_H
