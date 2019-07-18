# Chapter 2: Course Notes

### How do we read into a variable in C++?

1. Declare a variable.

2. Read the value from the user.

3. Store the value at the variable location.

   ```C++
   int main() {
   	int x;	// 1. Declare a variable.
       std::cin >> x;	// 2 & 3: Read and store the value in x
       std::cout << x;	// Display value
       return 0;
   }
   ```

   

### Integer Data Types

The size or range of the data can be stored in an integer data type is determined by how many bytes are allocated for storage. Because a bit can hold 2 values, 0 or 1, you can calculate the number of possible values by calculating 2<sup>_n_</sup> where _n_ is the number of bits.



Given 8 bits per byte, a short integer which is allocated 2 bytes can store 2<sup>16</sup> (65,536) possible 0 and 1 combinations. If we split those between negative and positive values, the data range for a short is -32,768 to +32,767.



* `int`s are at least as big as shorts
* `long`s are at least as bit as `int`s 



### Integer Constants/Literals

| **Suffix**                    | **Type modifier** | **Example**                      |
| ----------------------------- | ----------------- | -------------------------------- |
| u or U (case does not matter) | `unsigned`        | 5u (unsigned `int`)              |
| l or L                        | `long`            | 5L                               |
| u/U and l/L combinations      | `unsigned long`   | 5ul, 5lu (order does not matter) |

