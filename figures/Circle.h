//
// Created by Home on 2017-06-24.
//

#ifndef PRIMESCALCULATOR_CIRCLE_H
#define PRIMESCALCULATOR_CIRCLE_H

#include "IFigure.h"

namespace figures {

    class Circle : public IFigure {
    public:
        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_CIRCLE_H
