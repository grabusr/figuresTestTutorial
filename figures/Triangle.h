#pragma once

#include "IFigure.h"

namespace figures
{

	class Triangle : public IFigure
	{
	public:
		Triangle(float s) : side(s) {};
		float getArea() override;

	private:
		float side;
	};

}