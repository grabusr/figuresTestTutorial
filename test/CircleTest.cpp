//
// Created by Home on 2017-06-24.
//

#include <gtest/gtest.h>
#include "Circle.h"
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class CircleTest : public ::testing::Test {
    protected:
        figures::Circle C;
    };


    TEST(CircleTest, SimpleTest) {
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
    }


}

