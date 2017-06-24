//
// Created by mily on 24.06.17.
//
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "Circle.h"

namespace test
{

class CircleTest : public ::testing::Test
{

};

TEST_F(CircleTest, ReturnsValidCircleArea)
{
    // given:
    figures::Circle sut(5);

    // when:
    const float result = sut.getArea();

    // expectation:

    EXPECT_THAT(result, testing::FloatEq(78.54));
}

TEST_F(CircleTest, ReturnsZeroForNegativeRadius)
{
    // given:
    figures::Circle sut(-1);

    // when:
    const float result = sut.getArea();

    // expectation:

    EXPECT_THAT(result, testing::FloatEq(0));
}

}