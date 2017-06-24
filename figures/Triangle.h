//
// Created by marta on 24.06.17.
//

#ifndef PRIMESCALCULATOR_TRIANGLE_H
#define PRIMESCALCULATOR_TRIANGLE_H

#include "IFigure.h"

namespace figures
{

class Triangle : public IFigure
{

  float dimension;
    float area;

public:

    Triangle(float dimension);
    float getArea() override;
};

}


#endif //PRIMESCALCULATOR_TRIANGLE_H
