//
// Created by marta on 24.06.17.
//

#include <gtest/gtest.h>
#include "Triangle.h"

namespace test
{
TEST(TestCompile, SucceedTriangle)
{
    figures::Triangle t;
    SUCCEED();
}
}