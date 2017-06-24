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

    public:
        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_TRIANGLE_H
