# Chapter 8: Arrays and Vectors





## 8.1 Arrays Hold Multiple Values

An array allows you to store and work with multiple values of the same data type. 

```C++
int hours[6];			// array name, followed by its size declarator
```

**size declarator** - indicates the number of **elements**, or values, an array can hold.



## 8.2 Accessing Array Elements

**subscript** - used as an index to pinpoint a specific element in an array.

```C++
hours[0] = 20;	// assigns 20 to the first element in the array.
								// pronounced "hours sub zero"
```



## 8.3 Inputting and Displaying Arrays

Arrays can only be displayed one element at a time.



#### Reading Data from a File into an Array

```C++
ifstream inputFile;
inputFile.open('work.dat');
// Read the numbers from the file into the array. When we exit
// the loop, count will hold the number of items read in.
// iterate only as long as the array is not yet filled and the end of 
// the file has not yet been reached
while (count < NUM_EMPLOYEES && inputFile >> hours[count] )
	count++;
```

- contents must be input into the array one at a time

  

#### Writing the Contents of an Array to a File

C++ does not perform **array bounds checking**. This means you could write a program that accidentally allows an array’s subscript to go beyond its boundaries. On many systems it causes other nearby variables to have their contents overwritten, losing their correct value. On some systems it can even cause the computer to crash.

![image-20190729123012421](assets/image-20190729123012421.png)



## 8.4 Array Initialization

Arrays may be initialized when they are defined. They may be spread across multiple lines.

```C++
int myArray[3] = {1, 2, 3};
cout << myArray[0];	// 1
```

- When an array is being initialized, C++ does not require a value for every element .

- ```c++
  int numbers[7] = {1, 2, 4, 8};
  ```

- ![image-20190729165448373](assets/image-20190729165448373.png)

- If you leave an element uninitialized, you must leave all elements that follow it uninitialized as well.

- You can define an array without specifying its size, but you must provide an initialization list that includes every element. C++ will count the number of items in the initialization list and give the array that many elements.

  ```c++
  double ratings[] = {1.0, 2.0, 1.5};
  ```

#### New Ways to Initialize Variables

**functional notation**

```c++
int value(5);		// initialize value to 5
```

**brace notation** 

- checks to make sure the value you are initializing the variable with matches the data type of the variable

```c++
int value{5};			// checks to make sure 5 is an int
int value1 = 4.9;	// stores 4 in value 1
```



## 8.5 The Range-Based `for` Loop

The range-based `for` loop is a loop that iterates once for each element in an array. Each time the loop iterates, it copies an element from the array to a variable. The range-based `for` loop was introduced in C++ 11.

```c++
for(dataType rangeVariable : array)
  statement;
```

- **`rangeVariable`** is a variable that will receive the value of a different array element during each loop iteration. During the first loop iteration, it receives the value of the first element; during the second iteration, it receives the value of the second element, and so on.
  - `rangeVariable = array[index]` 

- You cannot modify the contents of an array in a range-based `for` loop  unless you declare the range variable as a _reference_.

  - To declare a range variable as a reference variable, place an `&` in front of its name in the loop header.

    ```c++
    for(datatype &rangeVariable : array)
      val = myNewValue;
    ```

- You can use the `auto` keyword with a reference range variable



## 8.6 Processing Array Contents

Individual array elements are processed like any other type of variable.

#### Copying One Array to Another

To copy the values from one array to another, you cannot simply assign one array to another array. You must loop through the first array and assign each value to the new array.

**Comparing arrays**

When you use the `==` operator with array names, the operator compares the beginning memory addresses of the arrays, not the contents of the arrays.

#### Strings

Strings are technically arrays and its characters can be accessed similarly to a normal array.



## 8.7 Using Parallel Arrays

