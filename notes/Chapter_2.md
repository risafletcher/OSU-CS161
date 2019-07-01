# Chapter 2

## 2.1 The Parts of a C++ Program

When a line begins with `#` it indicates it is a preprocessor directive. The preprocessor reads your program before it is compiled and only executes those lines beginning with a `#` symbol. Think of the preprocessor as a program that "sets up" your source code for the compiler.

The `#include` directive causes the preprocessor to include the contents of another file, known as a header file, in the program.

The word that is enclosed in brackets, `<iostream>`, is the name of the header file that is to be included. (The name of the file is `iostream`. The brackets indicate that it is a standard C++ header file.) 

Variables, functions, and objects are examples of program entities that must have names. C++ uses **namespaces** to organize the names of program entities. The statement `using namespace std` declares that the program will be accessing entities whose names are part of the namespace std. (Yes, even namespaces have names.) The program needs access to the std namespace because every name created by the `iostream` file is part of that namespace. In order for a program to use the entities in `iostream`, it must have access to the std namespace.

`main()` is the starting point for each C++ program.

![5a5460c0.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/5a5460c0.png)

`return 0` usually indicates the program executed successfully.

## 2.2 The `cout` Object

`cout` stands for "console input" and is used to display information on the computer's screen. It is considered a stream object.

**Stream object**: an object that works with streams of data.

`<<` sends a value to the `cout` or other objects. Used this way, it is called the stream-insertion operator. The item immediately to the right of the operator is inserted into the output stream that is sent to cout to be displayed on the screen. It can be chained to concatenate strings/values.

`endl;` end line (line break). It is a manipulator whereas `\n` is a character. endl will append \n and flushes the Output stream by calling `flush()` on the stream. It is slower than `\n` alone.

![b8d91e13.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/dfee7b0a.png)

Each escape sequence is considered one character.

## 2.3 The `#include` Directive

The `#include` directive causes the contents of another file to be inserted into the program.

Preprocessor directives are not C++ statements. They are commands to the preprocessor, which runs prior to the compiler. The preprocessor's job is to set programs up in a way that makes life easier for the programmer. They do not require semicolons.

The preprocessor inserts the entire contents of the file specified in the #include directive. The compiler doesn't actually see the #include directive. Instead it sees the code that was inserted by the preprocessor, just as if the programmer had typed it in there.

## 2.4 Variables and the Assignment Statement

The concept of a variable in computer programming is somewhat different from the concept of a variable in mathematics in that it corresponds to a storage location for holding data. Variables allow you to store and work with data in the computer's memory. They provide an "interface" to RAM. 

**Int number** - variable definition. It tells the computer the variable's name and the type of data it will hold.
`number = 5` - an assignment statement, the `=` sign is called the assignment operator.


## 2.5 Literals

A literal is a piece of data that is written directly into a program's code. One of the most common uses of literals is to assign a value to a variable. Another common use of literals is to display something on the screen.

`endl` is a stream manipulator.

## 2.6 Identifiers

An **identifier** is a programmer-defined name that represents some element of a program. Variable names are examples of identifiers.

![58de09bf.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/58de09bf.png)

## 2.7 Integer Data Types

![25fc3f28.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/25fc3f28.png)

**Integer**: a whole number
  - **signed**: positive and negative
  - **unsigned**: zero and positive

**Floating-point number**: numbers that have a decimal point
**Size**: the number of bytes a data type can hold

![9fbe4ffe.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/9fbe4ffe.png)

_*all can be abbreviated by omitting the word `int`._

Some data types have the same sizes and ranges.
- Integers are at least as big as short integers
- Long integers are at least as big as integers
- Unsigned short integers are the same size as short integers
- Unsigned integers are the same size as integers
- Unsigned long integers are the same size as long integers
- The long long int and the unsigned long long int data types are guaranteed to be at least 8 bytes (64 bits) 			   in size

Multiple variables of the same type can be defined in a single statement, separated by commas. It's generally preferred to break lines after each comma.

![29caf7f8.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/29caf7f8.png)


1. Define a `long` variable named `amount`.
To store an integer literal as a long integer, place the letter L at the end of the number.

2. Assign the literal value `32` to the amount variable. Because the literal is written as `32L`, it makes it a long integer literal. This means the assigned value is reated as a long. Likewise, if you want an integer literal to be treated as a long long int, you can append `LL` at the end of the number.

![c880eb07.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/5413943a.png)

The `0x` prefix denotes a **hexadecimal number**. The `0` prefix denotes an **octal number**.


## 2.8 Floating-Point Data Types

Floating-point data types are used to define variables that can hold real numbers. In order words, fractional values.

Internally, floating-point numbers are stored in a manner similar to scientific notation. In scientific notation, the number `47,281.97` is written as `4.728197 x 10^4`. The first part of the number, `4.728197` is called the **mantissa**. The **mantissa** is multiplied by a power of 10.

Computers typically use **E notation** to represent floating-point values. In E notation, the number `47,281.97` would be `4.728197E4`. The part of the number before the E is the mantissa and the part after the E is the power of 10. When a floating-point number is stored in memory, it is stored as the mantissa and the power of 10.

![7fd8c8cd.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/7fd8c8cd.png)

In C++, three data types can represent floating-point numbers:
- float: single precision
- double: usually twice as big as float, so it is considered double precision, at least as big as a float
	- long double: larger than double, at least as big as a double

![081b244c.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/081b244c.png)

_*Some compilers use more than 8 bytes for a long double. This allows a greater range._

On all machines, the float, double, and long double data type can store both positive and negative numbers.

Floating-point literals are normally stored in memory as doubles. If you need one to be stored as a float, you can append the letter F or f to the end of it. For example, this literal would be stored as a float number: `1.2F`.

When a floating-point number is assigned to an integer variable, the fractional part of the value is discarded because an int cannot hold any value containing decimals.

## 2.9 The char Data Type

The char data type is used to store individual characters. A variable of this type can hold only a single character and, on most systems, uses just one byte of memory.

![c3a59600.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/c3a59600.png)

Because a char variable can only hold a single character, it can be assigned the character `'A'`, but not the string `"A"`.

![0e4032e9.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/0e4032e9.png)

• Printable characters are internally represented by numeric codes. Most computers use ASCII codes for this purpose.
• Characters normally occupy a single byte of memory.
• Strings hold one or more characters that occupy consecutive bytes of memory.
• String literals have a null terminator at the end. This marks the end of the string.
• Character literals are enclosed in single quotation marks.
• String literals are enclosed in double quotation marks.
• Escape sequences such as '\n' are stored internally as a single character.


## 2.10 The C++ string Class

C++ does not have a built-in data type for strings. C++ provides a string class.

The first step in using the string class is to #include the string header file.

`#include <string>`

The next step is to define a string type variable, called a string. Defining a string object is similar to defining a variable of a primitive type. You can assign a string literal to your named string object with the assignment operator `=`.

![a65c7872.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/a65c7872.png)

## 2.11 The bool Data Type

Boolean variables are set to either true or false. `true` has an integer value of `1` and `false` has an integer value of `0`.

## 2.12 Determining the Size of a Data Type

The `sizeof` operator may be used to determine the size of a data type on any system.

One of the problems with portability is the lack of common sizes of data types on all machines. `sizeof` will report the number of bytes of memory used by any data type or variable. `sizeof(variable or data type)` can be used anywhere an unsigned an integer can be used, including in mathematical operations.

## 2.13 More on Variable Assignments and Initialization

**Lvalue**: something that identifies the place in memory whose contents may be changed, so a new value can be stored there. Most of the time an **lvalue** will be a variable name. It is called an **lvalue** because it is a value that may appears on the left-hand side of an assignment operator.

**Rvalue**: any expression that has a value.

`auto`: a key word that tells the compiler to determine the variable's data type from the initialization value. This is new to C++ 11. 

`auto quarter2 = quarter1`

Variable `quarter2` will be the same data type as previously defined variable 1 `quarter1`.


## 2.14 Scope

A variable's scope is part of the program that has access to the variable.

## 2.15 Arithmetic Operators

When two integers are divided and the result includes a fraction, the fraction is thrown away. Either divide floating point numbers or use the **_modulus operator_** to compute the remainder of doing an integer divide.

![3f30159f.png](../attachments/26e45154-06d5-4464-96a0-aebc9b5d2fba/3f30159f.png)

## 2.16 Comments

`//` prefix single-line comments.
`/*` and `*/` wrap multi-line comments.

## 2.17 Programming Style

_Programming style_ refers to the way source code is visually arranged.


