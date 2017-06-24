//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_IFIGURE_H
#define PRIMESCALCULATOR_IFIGURE_H

namespace figures
{
class IFigure
{
public:
    virtual ~IFigure() = default;
    virtual float getArea() = 0;
};
}

#endif //PRIMESCALCULATOR_IFIGURE_H
