# Testing

Testing is the process of trying to get any errors in your code to show themselves.  At the most basic level, simply trying to compile might reveal problems.  However, even once your program compiles, there could still be any number of runtime errors.  Some are obvious in that they crash your program or produce a wildly incorrect result, but others are more subtle - they may produce plausible-looking results, or may even produce correct results *most of the time*.  Since it would usually be highly impractical to try every possible combination of inputs, it helps to have some kind of strategy to guide your testing.  A number of approaches are in use and they can be combined in various ways.  Two common approaches are:

**Black Box testing (TDD)**

This involves creating test cases based solely on the specifications, without any knowledge of how the program was written.  Each test case would consist of an input (or set of inputs) and the corresponding output, calculated independently.  For example, if the specifications said that the program should take two integer inputs and output their sum, then one test case could consist of the inputs `8` and `4` and the corresponding output would be `12`.  Another test case could consist of the inputs `5` and `-6` and the corresponding output would be `-1`.  When you run a test case by entering the inputs for that test case, you can see if the output matches your independently calculated output.

**White Box testing (BDD)**

This again involves creating test cases that consist of input(s) and the corresponding output, but based on knowledge of how the program was written.  One part of this is checking **edge cases**, which means testing inputs at the boundaries of specified ranges for the program.  For example, if a program is supposed to accept an integer value between `1` and `100`, then you should check it on inputs of `1` and `100` to make sure it works correctly for those cases.  Another part is **code coverage**, which means coming up with test cases that will test different parts of the code.  In the next module, you'll be learning how to use conditionals and loops, which will allow you to create programs that have different possible paths through the code, depending on the input(s).  It's a good idea to make test cases to test out those different paths.  For example, If you have a program that's supposed to do one thing for even numbers and a different thing for odd numbers, then you should test at least one odd number and at least one even number.