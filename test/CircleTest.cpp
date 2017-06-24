#include <gtest/gtest.h>
#include <Circle.h>

namespace test
{
	class CircleTest : public ::testing::Test
	{

	};

	TEST_F(CircleTest, Simpletest)
	{
		figures::Circle cr(0);
	}
	TEST_F(CircleTest, checkIfGivenCorrectResult)
	{
		//given
		figures::Circle cr(10);

		//when
		const auto result = cr.getArea();

		//expected
		EXPECT_FLOAT_EQ(314.16f, result);

	}
}