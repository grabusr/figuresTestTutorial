//
// Created by Hanna Grodzicka on 24.06.2017.
//

#ifndef PRIMESCALCULATOR_TRIANGLE_H
#define PRIMESCALCULATOR_TRIANGLE_H

#include "IFigure.h"

namespace figures
{

    class Triangle : public IFigure
    {
    private:
        float side;

    public:
        Triangle(float side);
        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_TRIANGLE_H
