/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/19/19
** Description:  A class specification  file for a program that accepts  
**               dimensions for a Box instance and calculates and returns the 
**               volume of the Box and calculates and returns the surface area 
**               of the Box.
*******************************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
    private:
        double height;
        double width;
        double length;
        double volume;
        double surfaceArea;

    public:
        // Default constructor
        Box();

        // Custom constructor
        Box(double h, double w, double len);

        // setter functions
        void setHeight(double h);
        void setWidth(double w);
        void setLength(double len);

        /********************************************************************* 
        ** Description: calculates the volume of the Box
        *********************************************************************/
        double calcVolume();

        /********************************************************************* 
        ** Description: calculates the surface area of the Box
        *********************************************************************/
        double calcSurfaceArea();
};
#endif