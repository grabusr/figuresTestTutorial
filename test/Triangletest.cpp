//
// Created by RAB on 24.06.2017.
//

#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "Triangle.h"

using namespace testing;

namespace test {

    class TriangleTest : public ::testing::Test
    {

    };

    TEST(TriangleTest, GetAreaOfTriangleTest)
    {
        figures::Triangle triangle;

        const auto returnedArea = triangle.getArea();
        EXPECT_THAT(returnedArea, FloatEq(10));
    }

}