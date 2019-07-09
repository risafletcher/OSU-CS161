/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/08/19
** Description:  Asks the user for an integer that they player will try to
**               guess. If the guess is higher than the target number, the
**               program will display "too high" and if it's too low, "too
**               low". The program will loop until the correct guess is made.
**               The program will then print how many guesses it took.
*******************************************************************************/ 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int target,
        tries = 0,
        guess;
    // get target value
    cout << "Enter the number for the player to guess." << endl;
    cin >> target;

    cout << "Enter your guess." << endl;

    // loop until the guess matches the target
    while (guess != target)
    {
        // get guess
        cin >> guess;

        // if the guess is too high/low, print that to the console
        if (guess < target)
            cout << "Too low - try again." << endl;
        else if (guess > target)
            cout << "Too high - try again." << endl;

        // increment try
        tries++;
    }

    // only display success message if the guess is correct
    if (guess == target)
        cout << "You guessed it in " << tries << " tries." << endl;

    return 0;
}