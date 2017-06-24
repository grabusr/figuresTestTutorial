//
// Created by user on 24.06.17.
//

#include <gtest/gtest.h>
#include "Triangle.h"
namespace test
{
    class Triangletest : public ::testing::Test
    {

    };

    TEST_F(Triangletest, Simpletest)
    {
        figures::Triangle ta(0);
    }

	TEST_F(Triangletest, checkIfGivenCorrectResult)
	{
		//given
		figures::Triangle ta(5);

		//when
		const auto result = ta.getArea();

		//expected
		EXPECT_FLOAT_EQ(result, 10.83f);

	}
}