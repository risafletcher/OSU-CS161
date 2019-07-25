/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/24/19
** Description:  A function implementation file for a Vase object that has
**               two members: a HalfOpenCylinder instance and a
**               costPerSquareInch double. It includes a method called totalCost
**               that returns the surface area of the vase multiplied by the
**               cost per square inch. It also has a method called costsMoreThan
**               that takes a Vase parameter and returns true if the Vase the
**               method is called on costs more than the Vase passed in.
**               Otherwise, return false.
*******************************************************************************/
#include "Vase.hpp"
#include "HalfOpenCylinder.hpp"
#include <cmath>

/*********************************************************************
** Description: custom constructor to initialize the data members
*********************************************************************/
Vase::Vase(HalfOpenCylinder cylinder, double cost)
{
    // initialize data members to provided values
    hoc = cylinder;
    costPerSquareInch = cost;
}

/*********************************************************************
** Description: calculate total cost per square inch of surface area
*********************************************************************/
double Vase::totalCost()
{
    double surfaceArea = hoc.surfaceArea();
    return costPerSquareInch * surfaceArea;
}

/*********************************************************************
** Description: determines whether the Vase this method is called on
is more valuable than the Vase passed in as a parameter
*********************************************************************/
bool Vase::costsMoreThan(Vase vase2)
{
    return totalCost() > vase2.totalCost();
}
