//
// Created by Hanna Grodzicka on 24.06.2017.
//

#ifndef PRIMESCALCULATOR_CIRCLE_H
#define PRIMESCALCULATOR_CIRCLE_H

#include "IFigure.h"

namespace figures
{

    class Circle : public IFigure
    {
    public:
        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_CIRCLE_H
