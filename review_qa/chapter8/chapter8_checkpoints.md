# Chapter 8: Checkpoints

**8.1 Define the following arrays:**

1. `empNum`, a 100-element array of ints: `int empNum[100];`
2. `payRate`, a 25-element array of `doubles`: `double payRate[25];`
3. `lightYears`, a 14-element array of `long`s: `long lightYears[14];`
4. `stateCapital`, a 50-element array of `string` objects: `string stateCapital[50];`
5. `age`, and 8-element array of `int`s initialized with the values 9, 14,15, 17, 18, 19, 21, and 23: `int age[8] = {9, 14, 15, 17, 18, 19, 21, 23};`
6. `deptCode`, a 4-element array of `char`s initialized with the values ‘P’, ’S’, ‘F’, and ‘W’: `char deptCode[4] = {'P', 'S', 'F', 'W'};`



**8.2 Is each of the following a valid or invalid array definition? If a definition is invalid, explain why.**

1. `int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1};` **valid**
2. `int matrix[5] = {1, 2, 3, 4, 5, 6, 7};` **invalid; too many items in the array, exceeds number defined in the size declarator**
3. `double radii[10] = {3.2, 4.7};` **valid**
4. `int table[7] = {2, , , 27, , 45, 39};` **invalid, cannot initialize elements after an uninitialized element**
5. `int blanks[];` **invalid, must provide an initialization list**
6. `double measurements[4.5];` **invalid, can only specify length in ints**



**8.3 What would the valid subscript values be in a four-element array of `doubles`?** `0, 1, 2, 3`



**8.4 The following statements both use square brackes but they mean different things.**

```c++
int score[15];		// A. 15 is the size declarator
score[6] = 45;		// B. 6 is a subscript
```



**8.5 What is “array bounds checking”? Does C++ perform it?**

No. Array bounds checking is a check for the length of the array before allowing a certain subscript to be used. For example, an array with a length of 3 can be assigned a value for an element at the subscript 4.



**8.6 What is the output of the following code?**

```c++
int values[5], count;
for (count = 0; count < 5; count++)
   values[count] = count * 2;
for (count = 0; count < 5; count++)
   cout << values[count] << endl;

// OUTPUT: 0, 2, 4, 6, 8
```



**8.7 Complete the following program skeleton so it will have a 4-element array of `int` values called `fish`. When completed, the program should ask how many fish were caught by fishermen 1 through 4, and store this information in the array. Then it should display the data.**

```c++
#include <iostream>
using namespace std;
int main ()
{
   const int NUM_MEN = 4;
   // Define an array named fish that can hold 4 int values.
  int fish[NUM_MEN], counter;
  for(counter = 0; counter < NUM_MEN; counter++)
  {
    cout << "How many fish were caught by fisherman " << counter + 1 << "?" << endl;
    cin >> fish[counter];
  }
	for(counter = 0; counter < NUM_MEN; counter++)
    cout << "Fisherman " << counter + 1 << ": " << fish[counter] << endl;
   return 0;
}
```



