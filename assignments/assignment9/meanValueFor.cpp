/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/09/19
** Description:  A function that accepts a vector of pointers to Quadratics
**               objects and a value for x. The function returns the average
**               value of all the Quadratics pointed to by the vector's 
**               elements.
*******************************************************************************/
#include <vector>
#include "Quadratic.hpp"
// #include <iostream>

using std::vector;
// using std::cout;
// using std::cin;
// using std::endl;

double meanValueFor(vector<Quadratic*> quadratics, int x)
{
    // "total" here is our running sum
    double total = 0;
    // get length of the vector
    int length = quadratics.size();

    // for each quadratic pointer, call the valueFor method on the
    // object being pointed to
    for(int count = 0; count < length; count++)
    {
        Quadratic *quadratic = quadratics[count];
        total += quadratic->valueFor(x);
    }
    // return the mean, which is the total divided by the number of
    // elements in the vector
    return total / length;
}

// int main()
// {
//     Quadratic q1;
//     Quadratic q2;
//     vector<Quadratic *> vec;
//     vec.push_back(&q1);
//     vec.push_back(&q2);
//     double result = meanValueFor(vec, 1.0);
//     cout << "result: " << result << endl;
//     return 0;
// }
