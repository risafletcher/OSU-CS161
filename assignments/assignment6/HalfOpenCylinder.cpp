/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/24/19
** Description:  A function implementation file for a Half Open Cylinder object
**               which can be initialized with a height and radius. The class
**               provides a method for calculating the surface area of the half
**               open cylinder.
*******************************************************************************/
#include "HalfOpenCylinder.hpp"
#include <cmath>

/*********************************************************************
** Description: default constructor to initialize height and radius
*********************************************************************/
HalfOpenCylinder::HalfOpenCylinder()
{
    // initialize data members to provided default values
    height = 10;
    radius = 2;
}

/*********************************************************************
** Description: custom constructor to initialize height and radius
*********************************************************************/
HalfOpenCylinder::HalfOpenCylinder(double h, double r)
{
    // initialize data members to provided values
    height = h;
    radius = r;
}

/*********************************************************************
** Description: calculate surface area of open-ended cylinder
*********************************************************************/
double HalfOpenCylinder::surfaceArea()
{
    // A = 2*pi*r*h + 2 * pi*r^2
    double pi = 3.14159;
    double side = 2 * pi * radius * height;
    double end = pi * std::pow(radius, 2);
    return side + end;
}
