/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/29/19
** Description:  A function implementation that takes to parameters: an array
**               of int and the size of the array. The function should return
**               the median of the array.
*******************************************************************************/
// #include <iostream>
#include <algorithm>

// using std::cout;
// using std::cin;
// using std::endl;

/*********************************************************************
** Description: given an array of ints and an int size, find the
**              median value of the array.
*********************************************************************/
double findMedian(int array[], int size)
{
    std::sort(array, array + size); // sort the array by value

    if (size % 2 == 0)
    {
        // if the array length is even, we need to find the middle two
        // elements, add them together, and divide by 2
        int halfLength = size / 2;
        return (array[halfLength - 1] + array[halfLength]) / 2.0;
    } else 
    {
        // if array length is odd, find the element at the middle index
        // by dividing the size in half and round up; because this is
        // of int type, the 0.5 will be shaved off so we should receive
        // a whole number
        return array[(size / 2)];
    }
}

// int main()
// {
//     const int ODD_ARRAY_LENGTH = 3;
//     const int EVEN_ARRAY_LENGTH = 4;
//     int oddArray[ODD_ARRAY_LENGTH];
//     int evenArray[EVEN_ARRAY_LENGTH];

//     cout << "Please an array of " << ODD_ARRAY_LENGTH << " integers." << endl;
//     for (int oddCount = 0; oddCount < ODD_ARRAY_LENGTH; oddCount++)
//     {
//         cin >> oddArray[oddCount];
//     }

//     cout << "The median is: " << findMedian(oddArray, ODD_ARRAY_LENGTH) << endl;

//     cout << "Please an array of " << EVEN_ARRAY_LENGTH << " integers." << endl;
//     for (int evenCount = 0; evenCount < EVEN_ARRAY_LENGTH; evenCount++)
//     {
//         cin >> evenArray[evenCount];
//     }

// cout << "The median is: " << findMedian(evenArray, EVEN_ARRAY_LENGTH) << endl;

//     return 0;
// }