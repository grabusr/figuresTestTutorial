//
// Created by Tomasz Czubocha on 24.06.2017.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Triangle.h>
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class TriangleTest : public ::testing::Test {
    protected:

    };

    TEST_F(TriangleTest, Succeedtest) {

        //given:
        figures::Triangle sut{5};

        //when:
        float expected = 10.83;
        float result = sut.getArea();

        //expected:
        EXPECT_THAT(expected, FloatEq(result));
    }
}