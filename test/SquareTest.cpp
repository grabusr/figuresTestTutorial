//
// Created by Zxx on 2017-06-24.
//

#include <gtest/gtest.h>
#include "Square.h"

namespace test {

    class Squaretest : public ::testing::Test {

    };


    TEST(Squaretest, SimpleTest) {
        figures::Square s;

        auto area = s.getArea();

        EXPECT_EQ(area, 0);
    }

}

