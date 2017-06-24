//
// Created by marta on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Rectangle.h"

namespace test
{
    using namespace testing;
TEST(TestRectangle, ReturnIfAreaOfRectangleTwoxThreeIsSix)
{
    figures::Rectangle sut(2,3);

    EXPECT_THAT(sut.getArea(),Eq(6));
}
}
