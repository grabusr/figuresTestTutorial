//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_FIGURESCALCULATOR_H
#define PRIMESCALCULATOR_FIGURESCALCULATOR_H

#include <istream>

namespace calculator
{

class FiguresCalculator
{
public:
    int getFiguresAreaSumFromFile(const std::istream& file);
};

}

#endif //PRIMESCALCULATOR_FIGURESCALCULATOR_H
