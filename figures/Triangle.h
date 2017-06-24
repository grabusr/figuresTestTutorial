//
// Created by Tomasz Czubocha on 24.06.2017.
//

#ifndef PRIMESCALCULATOR_TRIANGLE_H
#define PRIMESCALCULATOR_TRIANGLE_H

#include "IFigure.h"

namespace figures {

    class Triangle : public IFigure {
    public:

        float getArea() override;
    };
}


#endif //PRIMESCALCULATOR_TRIANGLE_H
