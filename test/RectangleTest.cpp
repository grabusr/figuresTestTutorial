//
// Created by mattrex on 24.06.17.
//

#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "Rectangle.h"

using namespace testing;

namespace test {

    class RectangleTest : public ::testing::Test {

    };

    TEST(RectangleTest, ForArgumentsFiveAndTwoReturnedAreaIsTen) {
        figures::Rectangle rectangle(5, 2);

        const auto returnedArea = rectangle.getArea();
        EXPECT_THAT(returnedArea, FloatEq(10));
    }

}