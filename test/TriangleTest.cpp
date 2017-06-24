//
// Created by Tomasz Czubocha on 24.06.2017.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Triangle.h>
#include <SlawekFiguresParser.h>
#include <FiguresCalculator.h>

namespace test {
    using namespace testing;

    class TriangleTest : public ::testing::Test {
    protected:
        figures::Triangle sut;
    };

    TEST_F(TriangleTest, Succeedtest) {
        calculator::FiguresCalculator cal;
        fileParsers::SlawekFiguresParser parser;
    }
}