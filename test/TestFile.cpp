//
// Created by grabusr on 24.06.17.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Square.h>
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test
{
TEST(TestCompile, Succeedtest)
{
    figures::Square s;
    calculator::FiguresCalculator cal;
    fileParsers::SlawekFiguresParser parser;
}
}