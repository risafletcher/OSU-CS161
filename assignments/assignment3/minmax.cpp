/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/05/19
** Description:  Asks the user how many integers they'd like to input, accepts
**               that many inputs and returns the minimuim and maximum values
*******************************************************************************/ 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int
        min,
        max,
        numberOfInts,   // declare numberOfInts
        currentInput;   // declare currentInput
    
    // ask user for # of inputs
    cout << "How many integers would you like to enter?" << endl;  
    cin >> numberOfInts;    // store number of integers the user wants to enter

    // ask the user to input numberOfInts inputs
    cout << "Please enter " << numberOfInts << " integers." << endl; 

    for (int count = 0; count < numberOfInts; count++)
    {
        cin >> currentInput;
        if (count == 0) // on first loop, set min and max to first input
        {
            min = currentInput;
            max = currentInput;
        }    
        else if (currentInput < min)    // then, if the subsequent input < min, reassign min
            min = currentInput;
        else if (currentInput > max)    // if subsequent input is > max, reassign the max
            max = currentInput;
    }

    cout << "min: " << min << endl; // print min
    cout << "max: " << max << endl; // print max

    return 0;
}