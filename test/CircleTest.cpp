//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include <gtest/gtest.h>
#include <Circle.h>

namespace test {

    class CircleTest : public ::testing::Test {

    };

    TEST(CircleTest, TestName) {
        // given:
        figures::Circle c;

        // when:
        const auto area = c.getArea();

        // expected:
        EXPECT_EQ(0, area);
    }
}