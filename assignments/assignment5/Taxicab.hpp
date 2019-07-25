/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/19/19
** Description:  A class specification file for a program that accepts the
**               coordinates for a taxicab and allows for these values to be
**               changed in order to calculate the distance traveled and
**               current coordinates.
*******************************************************************************/
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
    private:
        int xCoord;
        int yCoord;
        int distanceTraveled;

    public:
        // Default constructor
        Taxicab();

        // Custom constructor
        Taxicab(int x, int y);

        // getter functions
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();

        /*********************************************************************
        ** Description: shift the x coordinate by the shiftX value
        *********************************************************************/
        void moveX(int shiftX);

        /*********************************************************************
        ** Description: shift the y coordinate by the shifY value
        *********************************************************************/
        void moveY(int shiftY);
};
#endif
