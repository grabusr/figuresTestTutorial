//
// Created by Zxx on 2017-06-24.
//

#include <gtest/gtest.h>
#include "Square.h"

namespace test
{

    class Squaretest : public ::testing::Test
    {

    };


    TEST(Squaretest, TestsSquareAreaCalculation)
    {
        // given:
        figures::Square s{5};

        // when:
        auto area = s.getArea();

        // expected:
        EXPECT_FLOAT_EQ(25, area);
    }

}

