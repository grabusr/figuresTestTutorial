//
// Created by user on 24.06.17.
//

#include <gtest/gtest.h>
#include "Rectange.h"

namespace test
{
    class Rectangletest : public ::testing::Test
    {

    };

    TEST_F(Rectangletest, Simpletest)
    {
        figures::Rectangle rc;
    }

    TEST_F(Rectangletest, CheckIfGiveCorrectResult)
    {
        //given:
        figures::Rectangle rc{5.0, 1.0};

        //when
        const auto result = rc.getArea();

        //excepted:
        EXPECT_EQ(5.0, result);

    }
}