/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/14/19
** Description:  A void function that takes three int parameters by reference
**               and sorts their values into ascending order
*******************************************************************************/ 

// #include <iostream>

// using std::cout;
// using std::cin;
// using std::endl;

void smallSort(int &first, int &second, int &third)
{
    // create new temporary variables to avoid re-reassignment
    // initialize with corresponding parameters
    int sortedFirst = first,
        sortedSecond = second,
        sortedThird = third;
    // not a very scalable solution, but it's a hacky bubble sort
    if (first > second)
    {
        if (first > third)
        {
            sortedThird = first;
            if (second > third)
            {
                sortedSecond = second;
                sortedFirst = third;
            }
            else
            {
                sortedFirst = second;
                sortedSecond = third;
            }
        }
        else {
            sortedFirst = second;
            sortedSecond = first;
        }
    }
    else
    {
        if (second > third)
        {
            sortedThird = second;
            if (first > third)
            {
                sortedFirst = third;
                sortedSecond = first;
            }
            else
            {
                sortedSecond = third;
                // sortedFirst already initialized at the correct value
            }
        }
        // we don't need an else statement here because we've initialized
        // the temp variables with the correct values in this case    
    }
    // finally, set the variables to temporary values
    first = sortedFirst;
    second = sortedSecond;
    third = sortedThird;  
}

// int main ()
// {
//     int first,
//         second,
//         third;
//     cout << "This program will sort three integer values in ascending order. ";
//     cout << "Please enter three integer values." << endl;
//     cin >> first >> second >> third;
//     smallSort(first, second, third);
//     cout << first << ", " << second << ", " << third << endl;
//     return 0;
// }