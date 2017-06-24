//
// Created by mily on 24.06.17.
//
#include <gtest/gtest.h>
#include <Square.h>
#include <gmock/gmock-matchers.h>

namespace test
{


class SquareTest : public ::testing::Test
{

};

TEST_F(SquareTest, ReturnsValidSquareArea)
{
    // given:
    figures::Square sut(5);

    // when:
    const float result = sut.getArea();

    // expectation:
    EXPECT_THAT(result, testing::FloatEq(25));
}

}


