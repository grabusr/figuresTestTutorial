#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "Square.h"

using namespace testing;

namespace test {

    class SquareTest : public ::testing::Test {

    };

    TEST(SquareTest, ForArgumentFiveReturnedAreaIsTwentyFive) {
        figures::Square square;

        const auto returnedArea = square.getArea();

        EXPECT_THAT(returnedArea, FloatEq(25));
    }
}