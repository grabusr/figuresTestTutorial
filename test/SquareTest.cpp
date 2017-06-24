//
// Created by Tomasz Czubocha on 24.06.2017.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Square.h>
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class SquareTest : public ::testing::Test {
    protected:
        figures::Square sut;
    };

    TEST_F(SquareTest, Succeedtest) {
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
    }
}