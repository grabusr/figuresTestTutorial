//
// Created by marta on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Triangle.h"
#include "cmath"
namespace test
{
    using namespace testing;
    MATCHER_P(TriangleArea, expected,"")
{
    return abs(expected - arg) < 0.01;
}
    TEST(TriangleArea, ReturnIfAreaOfTriangleWithDimFourIsProper)
    {
        figures::Triangle sut(4);
        float expected_value=(float)(4*sqrt(3));

        EXPECT_THAT(sut.getArea(),TriangleArea(expected_value));
        SUCCEED();
    }
}