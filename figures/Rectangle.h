//
// Created by mattrex on 24.06.17.
//

#ifndef PRIMESCALCULATOR_RECTANGLE_H
#define PRIMESCALCULATOR_RECTANGLE_H

#include "IFigure.h"

namespace figures {

    class Rectangle : public IFigure {
    public:
        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_RECTANGLE_H
