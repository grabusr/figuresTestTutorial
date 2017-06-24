//
// Created by Zxx on 2017-06-24.
//

#include <gtest/gtest.h>
#include "Rectangle.h"


namespace test {

    class Rectangletest : public ::testing::Test {

    };


    TEST(Rectangletest, SimpleTest) {
        // given:
        figures::Rectangle r;

        // when:
        auto area = r.getArea();

        // expected:
        EXPECT_EQ(area, 0);
    }
}
