/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         08/03/19
** Description:  A void function that takes two parameters - a ref to a pointer
**               to a dynamically allocated array of ints, and the size of the
**               array. The function will dynamically allocate an array that is
**               twice as long, filled with values from the original array,
**               followed by each of those values plus 1.
*******************************************************************************/ 

void transformArray(int *&array, int size)
{
    // create a new array twice as long as array
    int *doubleLengthArray = new int[size * 2];

    // loop through first array to fill new array
    for (int count = 0; count < size; count ++)
    {
        doubleLengthArray[count] = *(array + count);

        // while looping, let's also fill in the second half of the array
        // at the index size + count, set the value to the original array's
        // value plus 1
        doubleLengthArray[size + count] = *(array + count) + 1;
    }

    // delete old array since it's dynamically allocated
    delete [] array;

    // assign new array to old array pointer
    array = doubleLengthArray;

    // free doubleLengthArray from memory
    doubleLengthArray = nullptr;
}