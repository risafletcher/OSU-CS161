/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/19/19
** Description:  A function implementation file for a program that accepts  
**               dimensions for a Box instance and calculates and returns the 
**               volume of the Box and calculates and returns the surface area 
**               of the Box.
*******************************************************************************/
#include "Box.hpp"

// default Box constructor
Box::Box()
{
    height = 1;
    width = 1;
    length = 1;
}

// custom Box constructor
Box::Box(double h, double w, double len)
{
    // set initial member variable values
    height = h;
    width = w;
    length = len;
}

// SETTER FUNCTIONS
void Box::setHeight(double h)
{
    height = h;
}

void Box::setWidth(double w)
{
    width = w;
}

void Box::setLength(double len)
{
    length = len;
}

/********************************************************************* 
** Description: calculates the volume of the Box
*********************************************************************/
double Box::calcVolume()
{
    volume = width * height * length;
    return volume;
}

/********************************************************************* 
** Description: calculates the surface area of the Box
*********************************************************************/
double Box::calcSurfaceArea()
{
    double sideX = width * height;  // calculate area of each side
    double sideY = width * length;
    double sideZ = height * length;
    surfaceArea = 2 * (sideX + sideY + sideZ); // boxes have 6 sides, so multiply sum by 2
    return surfaceArea;
}
