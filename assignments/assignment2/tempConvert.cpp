/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/02/19
** Description:  Asks the user for a Celsius temperature then prints out the
**               Fahrenheit equivalent.
*******************************************************************************/ 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double
        celsiusTemperature,
        fahrenheitTemperature;

    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsiusTemperature;

    fahrenheitTemperature = (9 * celsiusTemperature / 5) + 32;

    cout << "The equivalent Fahrenheit temperature is: " << endl;
    cout << fahrenheitTemperature << endl;

    return 0;
}