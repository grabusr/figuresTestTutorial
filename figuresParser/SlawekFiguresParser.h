//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_SLAWEKFIGURESPARSER_H
#define PRIMESCALCULATOR_SLAWEKFIGURESPARSER_H

#include "FigureFileParser.h"

namespace fileParsers
{

class SlawekFiguresParser : public IFigureFileParser
{
public:
    std::vector<figures::IFigure*> getFiguresFromFile(const std::istream& fileStream) override;
};
}


#endif //PRIMESCALCULATOR_SLAWEKFIGURESPARSER_H
