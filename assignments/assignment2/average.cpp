/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/02/19
** Description:  Asks the user for four numbers then prints out the average of
**               those numbers (float)
*******************************************************************************/ 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double 
        firstNumber,
        secondNumber,
        thirdNumber,
        fourthNumber,
        average;
    
    cout << "Please enter four numbers." << endl;
    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;
    cin >> fourthNumber;

    average = (firstNumber + secondNumber + thirdNumber + fourthNumber) / 4;
    cout << "The average of those numbers is: " << endl;
    cout << average << endl;

    return 0;
}