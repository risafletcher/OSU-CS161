/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/09/19
** Description:  A class implementation for an object that takes four double
**               variables: a, b, c, and x. It provides methods for calculating 
**               their quadratic value and the quadratic's root values.
*******************************************************************************/
#include "Quadratic.hpp"
#include <cmath>

using std::pow;
using std::fabs;

/*********************************************************************
** Description: default constructor
*********************************************************************/
Quadratic::Quadratic()
{
    a = 1.0;
    b = 1.0;
    c = 1.0;
}

/*********************************************************************
** Description: custom constructor to initialize a, b, and c
*********************************************************************/
Quadratic::Quadratic(double aVal, double bVal, double cVal)
{
    a = aVal;
    b = bVal;
    c = cVal;
}

/*********************************************************************
** Description: setter for variable a
*********************************************************************/
void Quadratic::setA(double aValue)
{
    a = aValue;
}

/*********************************************************************
** Description: setter for variable b
*********************************************************************/
void Quadratic::setB(double bValue)
{
    b = bValue;
}

/*********************************************************************
** Description: setter for variable c
*********************************************************************/
void Quadratic::setC(double cValue)
{
    c = cValue;
}

/*********************************************************************
** Description: accepts value for x and returns quadratic value
**              given a, b, c, and x. The quadratic formula is:
**              ax^2 + bx + c.
*********************************************************************/
double Quadratic::valueFor(double xValue)
{
    x = xValue;

    return (a * pow(x, 2)) + (b * x) + c;
}

/*********************************************************************
** Description: returns the number of real roots for the calculated
**              quadratic value.
*********************************************************************/
int Quadratic::numRealRoots()
{
    // the formula to calculate the discriminant:  b^2– 4ac
    double discriminant = pow(b, 2) - (4 * a * c);
    // due to double rounding issues, we need to set a level of precision
    // when checking for equality
    double precision = 0.00001;
    // if discriminant is equal to 0, there are zero roots
    // note we're getting the absolute value (positive) and checking
    // it against the level of precision defined earlier
    if (fabs(discriminant) <= precision)
        return 1;
    // if discriminant is greater than 0, it has 2 roots
    else if (discriminant > precision)
        return 2;
    // if discriminant is less than 0, it has no roots
    else
        return 0;
}

