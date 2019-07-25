/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/24/19
** Description:  A class specification for a Vase object that has two members:
**               a HalfOpenCylinder instance and a costPerSquareInch double.
**               It includes a method called totalCost that returns the surface
**               area of the vase multiplied by the cost per square inch. It
**               also has a method called costsMoreThan that takes a Vase
**               parameter and returns true if the Vase the method is called on
**               costs more than the Vase passed in. Otherwise, return false.
*******************************************************************************/
#ifndef VASE_HPP
#define VASE_HPP
#include "HalfOpenCylinder.hpp"

class Vase
{
    private:
        HalfOpenCylinder hoc;
        double costPerSquareInch;
    public:
        /*********************************************************************
        ** Description: custom constructor to initialize the data members
        *********************************************************************/
        Vase(HalfOpenCylinder, double);

        /*********************************************************************
        ** Description: calculate total cost per square inch of surface area
        *********************************************************************/
        double totalCost();

        /*********************************************************************
        ** Description: determines whether the Vase this method is called on
        is more valuable than the Vase passed in as a parameter
        *********************************************************************/
        bool costsMoreThan(Vase);
};

#endif
