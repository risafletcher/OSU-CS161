/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/24/19
** Description:  A class specification for a Half Open Cylinder object which
**               can be initialized with a height and radius. The class
**               provides a method for calculating the surface area of the half
**               open cylinder.
*******************************************************************************/
#ifndef HALF_OPEN_CYLINDER_HPP
#define HALF_OPEN_CYLINDER_HPP

class HalfOpenCylinder
{
    private:
        double height;
        double radius;
    public:
        /*********************************************************************
        ** Description: default constructor to initialize height and radius
        *********************************************************************/
        HalfOpenCylinder();

        /*********************************************************************
        ** Description: custom constructor to initialize height and radius
        *********************************************************************/
        HalfOpenCylinder(double, double);

        /*********************************************************************
        ** Description: calculate surface area of open-ended cylinder
        *********************************************************************/
        double surfaceArea();
};

#endif
