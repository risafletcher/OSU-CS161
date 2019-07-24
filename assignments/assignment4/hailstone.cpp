/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/14/19
** Description:  A program that accepts an integer. If the int is even, it is 
**               divided in half, and if it is odd, it's multiplied by three
**               and one is added to it. These steps are repeated until a value
**               of 1 is reached. The output is the number of steps required 
**               to reach 1.
*******************************************************************************/ 

// #include <iostream>

// using std::cout;
// using std::cin;
// using std::endl;

int hailstone(int num)
{
    // initialize counter at 1
    int counter = 0;
    // loop until we reach a value of 1
    while(num != 1)
    {
        // if number is even, divide by two
        if (num % 2 == 0)
            num /= 2;
        // else, multiply by 3 and add 1
        else
            num = (num * 3) + 1;
        // increment counter
        counter++;
    }
    return counter;
}

// int main()
// {
//     int num;
//     cout << "This program will return the number of steps required to achieve ";
//     cout << "a value of 1 under the given conditions:" << endl;
//     cout << "- If the number is even, divide the number by 2 and continue.\n";
//     cout << "- If the number is odd, multiply the number by 3 and add 1 and continue." << endl;
//     cout << "Please enter an integer." << endl;
//     cin >> num;

//     cout << "The number of steps required is: " << hailstone(num) << "." << endl;
//     return 0;
// }