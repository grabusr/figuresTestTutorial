//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_SQUARE_H
#define PRIMESCALCULATOR_SQUARE_H

#include "IFigure.h"

namespace figures
{

class Square : public IFigure
{
private:
    float a;
    float b;
public:
    Square(float _a = 0.0f, float _b = 0.0f) : a(_a), b(_b) {}
    float getArea() override;
};

}

#endif //PRIMESCALCULATOR_SQUARE_H
