#include "Triangle.h"
#include <cmath>

namespace figures
{

	float Triangle::getArea()
	{
		const auto result = side*side*sqrtf(3)/4;

		return roundf(result*100.f) / 100.f;
	}

}
