//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include <gtest/gtest.h>
#include <Triangle.h>
#include <cmath>

namespace test {

    class TriangleTest : public ::testing::Test {

    };

    TEST_F(TriangleTest, TestsTriangleAreaCalculation) {
        // given:
        figures::Triangle t{1};

        // when:
        const auto area = t.getArea();

        // expected:
        EXPECT_EQ(roundf(sqrt(3)/4 * 100.0f)/ 100.0f, area);
    }
}