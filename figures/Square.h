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
public:
    Square();
    Square(int a_Side);
    float getArea() override;

private:
    int m_Side;
};

}

#endif //PRIMESCALCULATOR_SQUARE_H
