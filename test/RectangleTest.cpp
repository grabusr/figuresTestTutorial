//
// Created by Home on 2017-06-24.
//

#include <gtest/gtest.h>
#include "Rectangle.h"
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class RectangleTest : public ::testing::Test {
    protected:
        figures::Rectangle R;
    };


    TEST(RectangleTest, SimpleTest) {
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
    }


}

