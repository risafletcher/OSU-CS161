/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/02/19
** Description:  Asks the user for an integer number of cents, from 0 to 99,
**               and outputs how many of each type of coin would represent that
**               amount with the fewest total number of coins.
*******************************************************************************/ 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int change;

    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> change;

    const int quarters = change / 25; // because quarters is an int, the remaining cents will be left out
    change = change % 25;    // update change remaining
    const int dimes = change / 10;    // pull out dimes from remaining change
    change = change % 10;   // update change remaining
    const int nickles = change / 5;   // pull out nickles
    const int pennies = change % 5;    // any remaining value will be in pennies

    cout << "Your change will be: " << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickles << endl;
    cout << "P: " << pennies << endl;

    return 0;
}