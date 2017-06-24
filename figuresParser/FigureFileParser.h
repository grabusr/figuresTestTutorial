//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_FIGUREFILEPARSER_H
#define PRIMESCALCULATOR_FIGUREFILEPARSER_H

#include <vector>
#include <istream>

namespace figures
{
class IFigure;
}

namespace fileParsers
{
class IFigureFileParser
{
public:
    virtual ~IFigureFileParser() = default;

    virtual std::vector<figures::IFigure*> getFiguresFromFile(const std::istream& fileStream) = 0;
};
}

#endif //PRIMESCALCULATOR_FIGUREFILEPARSER_H
