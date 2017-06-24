//
// Created by user on 24.06.17.
//
#include <gtest/gtest.h>
#include "Square.h"
namespace test
{
    class Squaretest : public ::testing::Test
    {

    };

    TEST_F(Squaretest, Simpletest)
    {
        figures::Square sq;
    }

    TEST_F(Squaretest, CheckIfGiveCorrectResult)
    {
        //given:
        figures::Square sq{10.0, 1.0};

        //when
        const auto result = sq.getArea();

        //excepted:
        EXPECT_EQ(10.0, result);

    }
}