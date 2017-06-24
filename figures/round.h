//
// Created by mily on 24.06.17.
//

#ifndef PRIMESCALCULATOR_ROUND_H
#define PRIMESCALCULATOR_ROUND_H
#include "IFigure.h"

namespace figures
{

    class round : public IFigure
    {
    public:
        float getArea() override;
    };

}

#endif //PRIMESCALCULATOR_ROUND_H
