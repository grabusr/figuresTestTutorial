//
// Created by Zxx on 2017-06-24.
//

#ifndef PRIMESCALCULATOR_TRIANGLE_H
#define PRIMESCALCULATOR_TRIANGLE_H

#include "IFigure.h"


namespace figures
{

    class Rectangle : public IFigure
    {
    private:
        float side1;
        float side2;
    public:
        Rectangle(float,float);
        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_TRIANGLE_H
