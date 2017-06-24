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
    public:
        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_RECTANGE_H
