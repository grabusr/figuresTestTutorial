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
}