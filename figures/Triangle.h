#pragma once

#include "IFigure.h"

namespace figures
{

	class Triangle : public IFigure
	{
	public:

		float getArea() override;
	};

}