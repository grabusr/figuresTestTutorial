//
// Created by RAB on 24.06.2017.
//

#ifndef PRIMESCALCULATOR_CIRCLE_H
#define PRIMESCALCULATOR_CIRCLE_H


#include "IFigure.h"

namespace figures {

    class Circle : public IFigure {
        float r;
    public:
        Circle(float radius);
        ~Circle();

        float getArea() override;
    };

}


#endif //PRIMESCALCULATOR_CIRCLE_H
