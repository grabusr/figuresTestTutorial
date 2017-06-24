#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "Square.h"

using namespace testing;

namespace test {

    class SquareTest : public ::testing::Test {

    };

    TEST(SquareTest, ForArgumentFiveReturnedAreaIsTwentyFive) {
        figures::Square square(5);

        const auto returnedArea = square.getArea();

        EXPECT_THAT(returnedArea, FloatEq(25));
    }
}