/*******************************************************************************
** Author:       Risa Fletcher
** Date:         08/03/19
** Description:  A function that takes as parameters the addresses of 3 int
**               variables and sorts the ints at those addresses into ascending
**               order.
*******************************************************************************/
// #include <iostream>
// using std::cin;
// using std::cout;
// using std::endl;

// sort of a variation of bubble sort. since we have fixed values this is
// a hacky hard-coded approach
void smallSort2(int *first, int *second, int *third)
{
    // if first is larger than second, swap places
    if (*first > *second)
	{
		int temp = *first;
		*first = *second;
		*second = temp;
	}
    // if first is larger than third, swap again
	if (*first > *third)
	{
		int temp = *first;
		*first = *third;
		*third = temp;
	}
    // now we only have two numbers left to compare
    // if second is larger t han third, swap the two
    if (*second > *third)
	{
		int temp = *second;
		*second = *third;
		*third = temp;
	}
}


// int main()
// {
//     int first = 14;
//     int second = -90;
//     int third = 2;
//     smallSort2(&first, &second, &third);
//     cout << first << ", " << second << ", " << third << endl;
//     return 0;	
// }
