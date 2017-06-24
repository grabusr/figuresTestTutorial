//
// Created by mily on 24.06.17.
//

#ifndef PRIMESCALCULATOR_ROUND_H
#define PRIMESCALCULATOR_ROUND_H

#include "IFigure.h"

namespace figures
{

class Circle : public IFigure
{
public:
    Circle();
    Circle(int a_Radius);
    float getArea() override;

private:
    int m_Radius;
};

}

#endif //PRIMESCALCULATOR_ROUND_H
