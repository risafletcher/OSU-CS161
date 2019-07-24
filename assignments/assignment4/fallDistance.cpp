/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/14/19
** Description:  Given an equation to determine the distance an object falls,
**               the program will accept falling time as an argument and return
**               the distance (in meters) that the object has fallen in that
**               time.
*******************************************************************************/ 

// #include <iostream>
// #include <string>
#include <cmath>

// using std::cout;
// using std::cin;
// using std::endl;
using std::pow;
// declaring a function that will return a double
double fallDistance(double fallTime)
{
    // for readability, we're storing our gravitational acceleration
    // value in a variable
    double gravAcceleration = 9.8;  // m/s^2
    // because pow is a function, it will be executed first
    // then the multiplication will take place and the final
    // value will be returned
    return 0.5 * gravAcceleration * pow(fallTime, 2.0);
}

// int main()
// {
//     double fallTime;
//     cout << "This program will return the fall distance for an object, ";
//     cout << "given its fall time. Please enter a fall time." << endl;
//     cin >> fallTime;
//     cout << fallDistance(fallTime) << endl;
//     return 0;
// }