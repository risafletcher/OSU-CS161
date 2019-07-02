# Chapter 3: Expressions and Interactivity

## Table of Contents

- [3.1 The `cin` Object](#31-the--cin--object)
    + [Program Output with Example Input Shown in Bold](#program-output-with-example-input-shown-in-bold)
- [3.2 Mathematical Expressions](#32-mathematical-expressions)
  * [Precedence of Arithmetic Operators (Highest to Lowest)](#precedence-of-arithmetic-operators--highest-to-lowest-)
- [3.3 Data Type Conversion and Type Casting](#33-data-type-conversion-and-type-casting)

------



## 3.1 The `cin` Object

`cin` (**c**onsole **in**) can be used to read data typed at the keyboard.

*_Remember to include the_ `iostream` _header file in any program that uses_ `cout` _or_ `cin`.

The `>>` symbol is the **_stream extraction operator_**, which _extracts_ characters from the input stream so they can be used in a program. More specifically, the stream extraction operator gets characters from the stream object on its left and stores them in the variable whose name appears on its right.  

The `cin` object causes a program to wait until data is typed at the keyboard and the [Enter] key is pressed. No other lines will be executed until `cin` gets its input.

When the user enters characters from the keyboard, they are temporarily placed in an area of memory called the **_input buffer_**, or **_keyboard buffer_**. When `cin` reads them, it automatically converts them into the data type of the variable where the input data will be stored. For example, if the user types `10`, it is read as the characters `'1'` and `'0'`, but `cin` is smart enough to know this will have to be converted to the `int` value `10` before it is stored in a variable.

If a user enters a floating-point number like `10.7`, there is a problem. `cin` knows such a value cannot be stored in an `int` value, so it stops reading when it gets to the decimal point, leaving the decimal point and the rest of the digits in the input buffer.

```
cout << "Enter the length and width of the rectangle ";
cout << "separated by a space. \n";
cin >> length >> width;
```



#### Program Output with Example Input Shown in Bold

```
Enter the length and width of the rectangle separated by a space.

10 20[Enter]

The area of the rectangle is 200
```

In the example output, the user entered `10` and `20` so `10` is stored in `length` and `20` is stored in `width`.

Notice the user separates the numbers by spaces as they are entered. This is how `cin` knows where each number begins and ends. It doesn't matter how many spaces are entered between the individual numbers.

```
cout << "Enter an integer, a double, and a character";
cin >> whole >> factional >> letter;
```

![eb90d9a8.png](./assets/chapter3/eb90d9a8.png)



## 3.2 Mathematical Expressions

C++ allows you to construct complex mathematical expressions using multiple operators and grouping symbols.

When sending an expression that includes an operator to `cout`, it is always a good idea to put parentheses around the expression. Some operators will yield unexpected results otherwise.



### Precedence of Arithmetic Operators (Highest to Lowest)

| **Operator** | **Type** | **Description**                                    |
| ------------ | -------- | -------------------------------------------------- |
| `( )`        |          | Expressions within parentheses are evaluated first |
| `-`          | urnary   | Negation of a value, e.g., -6                      |
| `*  /  %`    | binary   | Multiplication, division, modulus                  |
| `+ -`        | binary   | Addition and subtraction                           |



**Associativity** is the order in which an operator works with its operands. Associativity is either _left to right_ or _right to left_.

| **Operator**          | **Associativity** |
| --------------------- | ----------------- |
| `(urnary negation) -` | Right to left     |
| `* /  %`              | Left to right     |
| `+  -`                | Left to right     |



C++ does not have an exponent operator. Raising a number to a power requires the use of a _library function_. A **library function** is a routine that performas a specific operation.

C++ uses the `pow` function for exponents. It accepts 2 arguments: a base and a power. `pow(base, exponent)`

`pow`:
- expects floating-point arguments (`double`)
- must include the `cmath` header file
- returns a `double` value

```
double area;
area = pow(4.0, 2);
```

***arguments** are information being sent to a function.



## 3.3 Data Type Conversion and Type Casting

When an operator's operands are of different data types, C++ automatically converts them to the same data type. When it does this it follows a set of rules, and understanding these rules will help you prevent subtle errors from creeping into your programs.

| **Data Type Ranking**    |
| ------------------------ |
| `long double`            |
| `double`                 |
| `float`                  |
| `unsigned long long int` |
| `long long int`          |
| `unsigned long int`      |
| `long int`               |
| `unsigned int`           |
| `int`                    |

*One exception to this ranking is when an `int` and a `long int` are the same size. In that case, an `unsigned int` outranks a `long int` because it can hold a higher value.



**type coercion**: the conversion of one type of object to a new object of a different type.

**promotion**: when a value is converted to a higher data type.

**demotion**: when a value is converted to a lower data type.



### Rules that govern evaluation of mathematical expressions

##### **Rule 1**: `char`, `short`, and `unsigned short` values are automatically promoted to `int` values.

*_The only exception to this rule is when an_  `unsigned short` _holds a value larger than can be held by an_ `int`.  _This can happen on systems where a_ `short` _is the same size as an_ `int`. _In this case, the_ `unsigned short` _is promoted to_ `unsigned int`.



##### **Rule 2**: When an operator works with two values of different data types, the lower-ranking value is promoted to the type of the higher-ranking value.

```C++
int years;
double interestRate;
years * interestRate;	// before multiplication, years will be promoted to a double
```



##### **Rule 3**: When the final value of an expression is assigned to a variable, it will be converted to the data type of that variable.

```C++
long int area;
int length,
	width;
area = length * width;	// the result will be promoted to long so it can be stored in area
```



**Type cast expression**: an expression that manually demotes or promotes a value (changes the data type). C++ provides several different types of cast expressions. `static_cast` is the most commonly used type cast expression.

```C++
// Value: variable or literal value you wish to convert
// DataType: the data type you wish to convert it to
static_cast<DataType>(Value)
    
// Example
double number = 3.7;
int val;
val = static_cast<int>(number);	// returns a copy of number, converted to an int
```

##### C-style Cast

```c
booksPerMonth = (double)books / months;
```

##### Pre-standard C++ Cast

```c++
booksPerMonth = double(books) / months;
```



## 3.4 Overflow and Underflow

When a value cannot fit in the number of bits provided by a variable’s data type, **overflow **or **underflow **occurs.



**High-order bit**: leftmost bit

A number with a `0` in the high-order bit is interpreted as a **positive number**. A number with a `1` in the high-order bit is interpreted as a **negative number**.



Examples of overflow:

- when a value exceeds the number of bits that data type allows.
- when an integer variable is holding the value at the far end of its data type’s negative range and 1 is subtracted from it, its higher-order bit will become a `0`, resulting in a positive number.

Examples of underflow:

- when a **floating-point value** is too close to zero and is so small that more digits of precision are needed to express it than can be stored in the variable holding it. 



## 3.5 Named Constants

Literals may be given names that symbolically represent them in a program.

- Constant names are typically all-caps: `const double INTEREST_RATE = 0.069;`
- Constants are read-only.



## 3.6 Multiple and Combined Assignment

Multiple assignment means to assign the same value to several variables with one statement.

```C++
a = b = c = d = 12	// a, b, c, and d are all assigned a value of 12
```



### Combined Assignment Operators

| **Operator** | **Example Usage** | **Equivalent To** |
| ------------ | ----------------- | ----------------- |
| `+=`         | `x += 5;`         | `x = x + 5`;      |
| `-=`         | `y -= 2;`         | `y = y - 2;`      |
| `*=`         | `z *= 10;`        | `z = z * 10;`     |
| `/=`         | `a /= b;`         | `a = a / b;`      |
| `%=`         | `c %= 3;`         | `c = c % 3;`      |



## 3.7 Formatting Output

`cout` provides ways to format data as it is being displayed. This affects the way data appears on the screen.



#### Stream Manipulators

`setw(minimum width = # of spaces)`: defines the minimum number of positions in the print field. Any value requiring a larger field than the specified minimum will cause `cout` to override the  `setw` value.



`setprecision(# of significant digits)`: specifies the number of significant digits to be displayed for a floating-point number. If the value is expressed in fewer digits, the manipulator will have no effect. By default, the system displays floating-point values with 6 significant digits.

```C++
cout << setprecision(5) << 307.00
// output
307.00
```



`fixed`: indicates that floating-point output should be printed in _fixed point_, or decimal notation. When used in conjunction with the `setprecision` manipulator, it specifies the number of digits to be displayed after the decimal point rather than the total number of digits displayed.

```C++
cout << fixed << setprecision(2) << 307.00
// output
307.00
```

`showpoint`: indicates that a decimal point and decimal digits should be printed for a floating-point number, even if the value being displayed has no decimal digits.

```C++
double x = 456.0;
cout << showpoint << x << endl;
// output
456.000
```



