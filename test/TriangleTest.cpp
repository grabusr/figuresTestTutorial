//
// Created by Hanna Grodzicka on 24.06.2017.
//

#include <gtest/gtest.h>
#include <Triangle.h>

namespace test {

    class TriangleTest : public ::testing::Test {

    };

    TEST_F(TriangleTest, Simpletest) {
        // given:
        figures::Triangle t;

        // when:
        const auto area = t.getArea();

        // expected:
        EXPECT_EQ(0, area);
    }
}