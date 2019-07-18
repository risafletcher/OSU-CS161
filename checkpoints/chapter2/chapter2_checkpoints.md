# Chapter 2: Checkpoints

**2.1 A C++ program will not compile because the lines have been mixed up. When the lines are properly arranged, the program should display the following screen:**

```
In 1492 Columbus saild the ocean blue.
```

Solution:

```C++
#include <iostream>
using namespace std;

int main()
{    
    cout << "In 1492 Columbus sailed the ocean blue.";
    return 0;
}
```



**2.2 On paper, write a program that will display your name on the screen. Use 2.1 as your guide. Place a comment with today’s date at the top of the program.**

```C++
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Risa Fletcher" << endl;
    return 0;
}
```



**2.3 The following `cout` statement contains errors. Correct it so that it will display a list of colors, with one item per line.**

```C++
cout << "red /n" << "blue \ n" << "yellow" \n << "green";
```

Solution:

```c++
cout << "red\n" << "blue\n" << "yellow\n" << "green";
```



**2.4 What output will the following lines of code display on the screen?**

```c++
cout << "The works of Wolfgang\ninclude the following";
cout << "\nThe Turkish March" << endl;
cout << "and Symphony No. 40";
cout << "in G minor." << endl;
```

Output:

```
The works of Wolfgang
include the following
The Turkish March
and Symphony No. 40 in G minor.
```



**2.5 On paper, write a program that will display your name on the first line, your street address on the second line, your city, state, and zip code on the third line, and your telephone number on the fourth line.**

```c++
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	cout << "John Smith\n";
	cout << "123 Home St.\n";
    cout << "New York, New York 12345\n";
    cout << "(123) 456-7890" << endl;
	return 0;
}
```



**2.6 Which of the following are legal C++ assignment statements?**

​		**a. `a = 7` **

​		b. `7 = a`

​		c. `7 = 7` 



**2.7 List all the variables that appear below.**

```C++
int main()
{
    int little;			// variable
    int big;			// variable
    little = 2;
    big = 2000;
    cout << "The little number is " << little << endl;
    cout << "The big number is " << big << endl;
    return 0;
}
```



**2.8 When the above main function runs, what will display on the screen?**

```
The little number is 2
The big number is 2000
```



**2.9 When the following main function runs, what will display on the screen?**

```C++
int main()
{
    int number;
    number = 712;
    cout << "The value is " << "number" << endl;
    return 0;
}
```

Output:

```
The value is number
```



**2.10 Which of the following are legal C++ variable names and why?**

```
x								// legal
99bottles						// illegal - cannot being with a digit
july97							// legal
theSalesFigureForFiscalYear98	// legal
r&d								// illegal - only underscore chars allowed
grade_report					// legal
```



**2.11 Is the variable name `Sales `the same as `sales`? Why or why not?**

No, variable names are case sensitive.



**2.12 Refer to the data types in the notes for these questions.**

1. **If a variable needs to hold numbers in the range 32 to 6,000, what data type would be best?** 
   `unsigned short int`
2. **If a variable needs to hold numbers in the range -40,000 to +40,000, what data type would be best?**
   `short int`
3. **20 and 20L are both integer literals. Does one use more memory than the other, and if so which one, or do they both use the same number of bytes?**
   They use the same number of bytes.



**2.13 Which integer data types can only hold non-negative values?**

`unsigned`



**2.14 How would you combine the following variable definition and assignment sttement into a single statement?**

```C++
int apples;
apples = 20;
// SOLUTION:
int apples - 20;
```



**2.15 How would you combine the following variable definitions into a single statement?**

```C++
int xCoord = 2;
int yCoord = -4;
int zCoord = 6;
// SOLUTION:
int xCoord = 2,
	yCoord = -4,
	zCoord = 6;
```



**2.16 How would the following number in scientific notation be represented in E notation?**

```C++
6.31 x 10^17
// SOLUTION:
6.31E17
```



**2.17 What will the following code display?**

```C++
int number;
number = 3.625;
cout << number;
// OUTPUT: 3
```



**2.18 Write a program that defines an integer variable named `age` and a `double` variable named `weight`. Store your age and weight as literals in the variables. The program should display these values on the screen in a manner similar to the following:**

```
My age is 26 and my weight is 168.5 pounds.
```

Solution:

```C++
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int age = 26;
    double weight = 168.5;
    cout << "My age is " << age << " and my weight is ";
    cout << weight << " pounds." << endl;
	return 0;
}
```



**2.19 What are the ASCII codes for the following characters?**

```C++
C	// 67
F	// 70
W	// 87
```



**2.20 Which of the following is a character literal?**

```C++
'B'		// this one
"B"
```



**2.21 Assuming the `char` data type uses 1 byte of memory, how many bytes do each of the following literals use?**

```C++
'Q'			// 1 byte
"Q"			// 2 bytes because a null terminator is added at the end
"Sales"		// 6 bytes
'\n'		// 1 byte since it's an escape sequence
```



**2.22 What is wrong with the following program statement?**

```C++
char letter = "Z";
```

The `char` data type only accepts one character and should be single quotes. Double quotes are used for `string`s, which are sequences of characters.



**2.23 What header must you include in order to use `string` objects?**

```C++
#include <string>
```



**2.24 Write a program that stores your name, address, and phone number in three separate `string` objects. Then display their contents on the screen.**

```C++
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string 
        name,
    	address,
    	phoneNumber;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your address" << endl;
    cin >> address;
    cout >> "Enter your phone number" << endl;
    cin >> phoneNumber;
    
    cout << name << endl;
    cout << address << endl;
    cout << phoneNumber << endl;
	return 0;
}
```



**2.25 Is the following assignment statement valid or invalid. Why?**

```C++
72 = amount;	// invalid, variable names can't start with a number
```



**2.26 What is wrong with the following program? How would you correct it?**

See book for broken program.

Solution:

```C++
#include <iostream>
using namespace std;

int main()
{
	double critter;
	critter = 62.7;
	cout << critter << endl;
	return 0;
}
```



**2.27 What will be assigned to `x` in each of the following statements?**

1. `x = 8 + 3;`
   11
2. `x = 8 - 3;`
   5
3. `x = 8 * 3;`
   24
4. `x = 8 % 3;`
   2



**2.28 Is the following an example of integer division or floating-point division? What value will be displayed?**

```C++
cout << 16 / 3;			// integer division; 
// OUTPUT: 5
```

