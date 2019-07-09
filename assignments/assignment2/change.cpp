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
    int
        change,
        quarters,
        dimes,
        nickels,
        pennies;

    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> change;

    quarters = change / 25; // because quarters is an int, the remaining cents will be left out
    change = change % 25;    // update change remaining
    dimes = change / 10;    // pull out dimes from remaining change
    change = change % 10;   // update change remaining
    nickels = change / 5;   // pull out nickles
    pennies = change % 5;    // any remaining value will be in pennies

    cout << "Your change will be: " << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;

    return 0;
}
