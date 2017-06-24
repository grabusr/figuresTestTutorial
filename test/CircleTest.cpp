//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include <gtest/gtest.h>
#include <Circle.h>
#include <cmath>

namespace test {
    class CircleTest : public ::testing::Test {
    };

    TEST_F(CircleTest, TestsCircleAreaCalculation) {
        // given:
        figures::Circle c{1};

        // when:
        const auto area = c.getArea();

        // expected:
        EXPECT_FLOAT_EQ(3.14, area);
    }
}