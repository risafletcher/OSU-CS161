/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/09/19
** Description:  A class specification for an object that takes four double
**               variables: a, b, c, and x. It provides methods for calculating 
**               their quadratic value and the quadratic's root values.
*******************************************************************************/
#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

class Quadratic
{
    private:
        double a, b, c, x;
    
    public:
        Quadratic();

        Quadratic(double, double, double);

        void setA(double);
        void setB(double);
        void setC(double);
        
        double valueFor(double);

        int numRealRoots();
};

#endif