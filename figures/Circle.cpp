#include "Circle.h"
#include <cmath>

#define M_PI 3.14159265358979323846

namespace figures
{

	float Circle::getArea()
	{
		const auto result = M_PI * radius * radius;

		return roundf(result*100.f)/100.f;
	}

}