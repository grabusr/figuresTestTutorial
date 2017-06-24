//
// Created by grabusr on 24.06.17.
//

#include "Square.h"

namespace figures
{

    float Square::getArea()
    {
        return side * side;
    }

    Square::Square(float side) : side{side}
    {

    }

}
