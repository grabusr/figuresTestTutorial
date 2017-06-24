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

    };

    TEST_F(SquareTest, Succeedtest) {

        //given:
        figures::Square sut{5.5};

        //when:
        float expected = 30.25;
        float result = sut.getArea();

        //expected:
        EXPECT_THAT(expected, FloatEq(result));
    }
}