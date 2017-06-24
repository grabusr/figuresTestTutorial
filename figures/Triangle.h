//
// Created by RAB on 24.06.2017.
//

#ifndef PRIMESCALCULATOR_TRIANGLE_H
#define PRIMESCALCULATOR_TRIANGLE_H


#include "IFigure.h"

namespace figures {

    class Triangle : public IFigure {
        float a;
    public:
        Triangle(float side);
        ~Triangle();

        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_TRIANGLE_H
