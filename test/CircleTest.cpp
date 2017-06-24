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
        EXPECT_EQ(roundf(M_PI * 100.0f)/100.0f, area);
    }
}