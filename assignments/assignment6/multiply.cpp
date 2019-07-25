/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/24/19
** Description:  A function that takes two integers and returns the product
**               of those numbers without using multiplication.
*******************************************************************************/

// #include <iostream>

// using std::cout;
// using std::cin;
// using std::endl;

/*********************************************************************
** Description: given two positive int parameters, multiply the two
**              using only addition (don't use the * operand)
*********************************************************************/
int multiply(int first, int second)
{
    if (second == 0)        // base case: when the multiplicand is zero, exit
        return 0;
    
    return first + multiply(first, second - 1); // recursive case: add the multplier
                                                // then decrement the multiplicand
}

// int main()
// {
//     int first,
//         second;
    
//     cout << "Please input two integers" << endl;
//     cin >> first >> second;

//     cout << "The product is: " << multiply(first, second) << endl;
//     return 0;
// }