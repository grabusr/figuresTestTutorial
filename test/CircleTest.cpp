//
// Created by Home on 2017-06-24.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Circle.h"
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class CircleTest : public ::testing::Test {
    protected:
        figures::Circle sut{10};
    };


    TEST_F(CircleTest, SimpleTest) {
        //given:
        //when:
        float expectedArea=314.16;
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
        //expected:
        EXPECT_THAT(expectedArea, FloatEq(round(sut.getArea()*100)/100));
    }


}

