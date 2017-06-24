#pragma once

#include "IFigure.h"

namespace figures
{

	class Circle : public IFigure
	{
	public:

		float getArea() override;
	};

}