//
// Created by marta on 24.06.17.
//

#include "Triangle.h"
#include "cmath"
namespace figures
{

float Triangle::getArea()
{
    return roundf(area*100.0f)/100.0f;
}
Triangle::Triangle(float dimension){area=(float)(dimension*dimension*sqrt(3)/4);}

}