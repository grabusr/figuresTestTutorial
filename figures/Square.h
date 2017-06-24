//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_SQUARE_H
#define PRIMESCALCULATOR_SQUARE_H

#include "IFigure.h"

namespace figures {

    class Square : public IFigure {
    public:
        Square(float a);
        virtual ~Square();
        float getArea() override;

    private:
        float m_a;
    };

}

#endif //PRIMESCALCULATOR_SQUARE_H
