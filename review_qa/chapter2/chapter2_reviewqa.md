# Chapter 2: Review Questions and Exercises

## Table of Contents

- [Fill-in-the-Blank and Short Answer](#fill-in-the-blank-and-short-answer)
- [Algorithm Workbench](#algorithm-workbench)
- [Predict the Output](#predict-the-output)
- [Find the Error](#find-the-error)

<hr>

### Fill-in-the-Blank and Short Answer

1. Every complete C++ statement ends with a **semicolon**.

2. To use `cout` statements, you must include the **`<iostream>`** header file in your program.

3. Every C++ program must have a function named **main**.

4. Preprocessor directives begin with a **`#`**.

5. A group of statements, such as a body of a function, must be enclosed in **`{}`**.

6. `72`, `A`, and `“Hello World”` are all examples of **literals**.

7. `978.65 x 10^2` would be written in E notation as **978.65E2**.

8. The character literal `‘A’` requires **1** byte of memory, whereas the string literal `“A”` requires **2** bytes.

9. Indicate if each of the following assignment statement is valid or invalid. Assume that `total`, `yourAge`, and `myAge` are int variables and `herAge` is a `string` variable.

   1. `total = 9;` **valid**
   2. `72 = total;` **invalid**
   3. `yourAge = myAge;` **valid**
   4. `herAge = “19”;` **valid**

10. If the variables `letter` and `w` have been defined as character variables, indicate if each of the following assignment statements is valid or invalid.

    1. `letter = w;` **invalid**
    2. `letter = ‘w’;` **valid**
    3. `letter = 'wow';` **invalid**
    4. `letter = “w”;` **invalid**

11. Indicate if each of the following assignment statements is valid or invalid. Assume that `total`, `sum1`, and `sum2` are all integer variables.

    1. `total = 15;` **valid**
    2. total = 12 + 3;` **valid**
    3. `total = 24 / 2;` **valid**
    4. `total = sum1 + sum2;` **valid** 

12. Indicate if each of the following variable definition and initialization statements is valid or invalid.

    1. `char name = “Tom”;` **invalid**
    2. `char name = ‘Tom’;` **invalid**
    3. `bool answer = "true";` **invalid**
    4. `auto miles = 2.9;` **valid**

13. Indicate if each of the following `cout` statements is valid or invalid.

    1. `cout << “Hello” << endl;` **valid**
    2. `cout << "Hello" << \n;` **invalid**
    3. `cout << “Hello \n”;` **valid**
    4. `cout << Hello`; **invalid**

14. Indicate if each of the following `cout` statements is valid or invalid.

    1. `cout << “Hello world”;` **valid**
    2. `cout << Hello world;` **invalid**
    3. `cout << “Hello” << “world”;` **valid**

15. Assume that variables `x`, `y`, and `result` are all integers and that `x = 4` and `y = 7`. What value will be stored in `result` by each of the following statements?

    1. `result = x + y;`	 **result = 11**
    2. `result = y * 2;`     **result = 14**
    3. `result = y / 2;`     **result = 3**
    4. `result = y / 2.0;` **result = 3**

16. Assume that `x` and `result` are both double variables, that `y` is an int variable and that `x = 2.5` and `y = 7`. What value will be stored in `result` by each of the following statements?

    1. `result = x + y;`     **result = 9.5**
    2. `result = y * 2;`     **result = 14**
    3. `result = y / 2;`     **result = 3.5**
    4. `result = y / 2.0;` **result = 3.5**

17. Write a C++ statement that defines the `double` variables `temp`, `weight`, and `height` all in the same statement.

    ```C++
    double temp, weight, height;
    ```

18. Write a C++ statement that defines `int` variables `months`, `days`, and `years` all in the same statement, with `months` initialized to 2 and `years` initialized to 3.

    ```C++
    int months = 2,
    		days,
    		years = 3;
    ```

19. Write assignment statements that perform the following operations with `int` variable `i`, `double` variables `d1` and `d2`, and `char` variable `c`.

    A.  Add 2 to `d1` and store the result in `d2`. **`d2 = d1 + 2;`**

    B.  Multiply `d2` times 4 and store the result in `d1`.  **`d1 = d2 * 4;`** 

    C.  Store the character `‘K’` in `c`.  **`c = ‘K’;`**

    D.  Store the ASCII code for the character `‘K’` in `i`.  **`i= ‘K’;`**

    E.  Subtract 1 from `i` and store the result back in `i`.  **`i = i - 1;`**

20. Write assignment statements that perform the following operations with `int` variable `i`, `double` variables `d1` and `d2`, and `char` variable `c`.
    A.  Subtract 8.5 from `d2` and store the result in `d1`.  **`d1 = d2 - 8.5;`**
    B.  Divide `d1` by 3.14 and store the result in `d2`.  **`d2 = d1 / 3.14;`**
    C.  Store the ASCII code for the character `‘F’` in `c`.  **`c = ‘F’;`**
    D. Add 1 to `i` and store the new value back in `i`.  **`i = i + 1;`**
    E.  Add `d1` to the current value of `d2` and store the result back in `d2` as its new value.  **`d2 += d1;`**

21. Modify the following program segment so it prints two blank lines between each line of text.

    ```C++
    cout << "Two mandolins like creatures in the\n\n";
    cout << "dark\n\n";
    cout << "creating the agony of ecstasy.\n\n";
    cout << "                   - George Barker";
    ```

22. Rewrite the follow statement to use the newline escape character instead of an `endl` , each time subsequent output is to be displayed on a new line.

    ```c++
    cout << "L\n"
      	 << "E\n"
      	 << "A\n"
      	 << "F\n";
    ```

### Algorithm Workbench

23. Create detailed pseudocode for a program that calculates how many days are left until Christmas, when given as an input how many weeks are left until Christmas. Use variables named `weeks` and `days`.

    ```
    declare variables weeks and days
    prompt user for # of weeks until Christmas
    get weeks
    set days to weeks * 7
    print days
    ```

24. Create detailed pseudocode for a program that determines how many full 12-egg cartons of eggs a farmer can pack when given as an input the number of eggs collected on a given day. Create variables named `eggs` and `cartons`.

    ```
    declare variables eggs and cartons
    prompt user for # of eggs
    get eggs
    set cartons to eggs / 12
    print cartons
    ```

25. Create detailed pseudocode for a program that determines distance travelled when given inputs of speed and time. Use variables named `speed`, `time`, and `distance`.

    ```
    declare variables speed, time, and distance
    prompt user for speed
    get speed
    prompt user for time
    get time
    set distance to speed * time
    print distance
    ```

26. Create detailed pseudocode for a program that determines miles per gallon a vehicle gets when given inputs of miles traveled and gallons of gas used. Use variables named `miles`, `gallons`, and `milesPerGallon`.

    ```
    declare variables miles, gallons, and milesPerGallon
    prompt user for miles travelled
    get miles
    prompt user for gallons of gas
    get gas
    set milesPerGallon to miles / gallon
    print milesPerGallon
    ```

### Predict the Output

27. What will each of the following program segments print on the screen?

    ```C++
    // A
    int freeze = 32, boil = 212;
    freeze = 0;
    boil = 100;
    cout << freeze << endl << boil << endl;
    // OUTPUT:
    0
    100
    --------------------
    // B
    int x = 0, y = 2;
    x = y * 4;
    cout << x << endl << y << endl;
    // OUTPUT:
    8
    2
    ---------------------
    // C
    cout << "I am the incredible";
    cout << "computing\nmachine";
    cout << "\nand I will \namaze\n";
    cout << "you.\n";
    // OUTPUT:
    I am the incredible computing
    machine
    and I will
    amaze
    you.
      
    ```

28. What will each of the following program segments print to the screen?

    ```c++
    // A
    cout << "Be careful!\n";
    cout << "This might/n be a trick ";
    cout << "question.\n";
    // OUTPUT:
    Be careful!
    This might/n be a trick question.
    
    --------------------
    // B
    int a, x = 23;
    a = x % 2;
    cout << x << endl << a << endl;
    // OUTPUT:
    23
    11
    ```

### Find the Error

29. The following program contains many syntax errors. Locate as many as you can.

    ```C++
    */ What's wrong with this program? /*		// Comment asterisks should be inside the /
    #include iostream				// <iostream>
    using namespace std;
    
    int main();		// remove semicolon
    }							// should be {
    	int a, b, c		\\ Define 3 integers		// should be forward slashes, add semicolon
    	a = 3		// add semicolon
      b = 4		// add semicolon
      c = a + b	// add semicolon
      Cout >> "The value of c is " >> C;	// lowercase the C's
    	return 0;
    {				// should be }
    ```