//
// Created by user on 24.06.17.
//

#ifndef PRIMESCALCULATOR_RECTANGE_H
#define PRIMESCALCULATOR_RECTANGE_H


#include "IFigure.h"

namespace figures
{
    class Rectangle : public IFigure
    {
    private:
        float a;
        float b;
    public:
        Rectangle(float _a = 0.0f, float _b = 0.0f) : a(_a), b(_b) {}
        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_RECTANGE_H
