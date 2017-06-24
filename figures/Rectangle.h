//
// Created by Home on 2017-06-24.
//

#ifndef PRIMESCALCULATOR_RECTANGLE_H
#define PRIMESCALCULATOR_RECTANGLE_H

#include "IFigure.h"

namespace figures {

    class Rectangle : public IFigure {
    private:
        float sideA, sideB;
    public:

        Rectangle(float _sideA, float _sideB) :
                sideA(_sideA), sideB(_sideB) {}

        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_RECTANGLE_H
