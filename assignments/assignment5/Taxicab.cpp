/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/19/19
** Description:  A function implementation file for a program that accepts the
**               coordinates for a taxicab and allows for these values to be 
**               changed in order to calculate the distance traveled and 
**               current coordinates.
*******************************************************************************/
#include "Taxicab.hpp"
#include <cstdlib>

// default Taxicab constructor
Taxicab::Taxicab()
{
    xCoord = 0;
    yCoord = 0;
    distanceTraveled = 0;
}

// custom Taxicab constructor
Taxicab::Taxicab(int x, int y)
{
    // set initial member data values
    xCoord = x;
    yCoord = y;
    distanceTraveled = 0;
}

// GETTER FUNCTIONS
int Taxicab::getXCoord()
{
    return xCoord;
}

int Taxicab::getYCoord()
{
    return yCoord;
}

int Taxicab::getDistanceTraveled()
{
    return distanceTraveled;
}

/********************************************************************* 
** Description: shifts the xCoord by a given amount
*********************************************************************/
void Taxicab::moveX(int shiftX)
{
    xCoord += shiftX;
    distanceTraveled += std::abs(shiftX);
}

/********************************************************************* 
** Description: shifts the yCoord by a given amount
*********************************************************************/
void Taxicab::moveY(int shiftY)
{
    yCoord += shiftY;
    distanceTraveled += std::abs(shiftY);
}
