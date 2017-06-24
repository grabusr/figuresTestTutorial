//
// Created by Home on 2017-06-24.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Rectangle.h"
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class RectangleTest : public ::testing::Test {
    protected:
        figures::Rectangle sut{10, 20};
    };


    TEST_F(RectangleTest, SimpleTest) {
        //given:
        //when:
        float expectedArea = 200;
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
        //expected:
        EXPECT_THAT(sut.getArea(), FloatEq(expectedArea));
    }


}

