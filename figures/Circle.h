#pragma once

#include "IFigure.h"

namespace figures
{

	class Circle : public IFigure
	{
	public:
		Circle(float r) : radius(r) {};
		float getArea() override;
		
	private:
		float radius;
	};

}