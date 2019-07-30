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



**8.8 Given the following array definition:**

```c++
int age[] = {7, 10, 14, 17, 19};
```

**What do each of the following code segments display?**

1. ```c++
   for (int val : age)
       cout << val << " ";
   // OUTPUT: 7 10 14 17 19
   ```

2. ```c++
   for (int val : age)
       val++
   // NO OUTPUT
   ```

3. ```c++
   for (int &val : age)
       val++
   for (int val : age)
       cout << val << " ";
   // OUTPUT: 8 11 15 18 20
   ```



**8.9 Will the following statement work? If not, why?**

```c++
double array1[4] = {1.2, 3.2, 4.2, 5.2};
double array2[4];
array2 = array1;

// NO, to copy an array you must loop through the first and assign those values to the second array
```



**8.10 What will the following code segment display?**

```c++
int set1[] = {2, 4, 6};
int set2[] = {2, 4, 6};
if (set1 == set2)
   cout << "same";
else
   cout << "different";

// OUTPUT: different
```



**8.11 Given the following array definition, what do each of the following display?**

```c++
int values[] = {2, 6, 10, 14};
```

1. ```c++
   cout << values[2]	// 10
   ```

2. ```c++
   cout << ++values[0];	// 3
   cout << " " values[0];	// 2
   ```

3. ```c++
   cout << values[1]++;	// 6
   cout << " " values[1];	// 6
   ```

4. ```c++
   x = 2;
   cout << values[++x];	// 14
   ```



**8.12 What will the following statement display?**

```c++
int nums[5] = {1, 2, 3};
cout << nums[3];	// 0
```



**8.13 Which of the following statements correctly initialize the max variable when it is defined?**

```c++
int max = 10;	// This

int max;
max = 10;

int max(10);	// This
int max{10};
```



**8.14 What is the output of the following code?**

```c++
const int SIZE = 5;
int count;
int time[SIZE] =  {1, 2, 3, 4, 5},
    speed[SIZE] = {18, 4, 27, 52, 100},
    dist[SIZE];
for (count = 0; count < SIZE; count++)
   dist[count] = time[count] * speed[count];
for (count = 0; count < SIZE; count++)
{  cout << setw(3) << time[count] << setw(5) << speed[count]
        << setw(5) << dist[count] << endl;
}

// OUTPUT:
// 1  18   18
// 2  4    8
// 3  27   81
// 4  52   208
// 5  100  500
```

