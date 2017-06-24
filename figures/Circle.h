//
// Created by Home on 2017-06-24.
//

#ifndef PRIMESCALCULATOR_CIRCLE_H
#define PRIMESCALCULATOR_CIRCLE_H

#include "IFigure.h"

namespace figures {

    class Circle : public IFigure {
    private:
        float radius;
    public:

        Circle(float _radius) :
                radius(_radius) {}

        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_CIRCLE_H
