//
// Created by RAB on 24.06.2017.
//

#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "Circle.h"

using namespace testing;

namespace test {

    class CircleTest : public ::testing::Test {

    };

    TEST(CircleTest, GetAreaOfCircleTest)
    {
        figures::Circle circle;

        const auto returnedArea = circle.getArea();
        EXPECT_THAT(returnedArea, FloatEq(10));
    }
}