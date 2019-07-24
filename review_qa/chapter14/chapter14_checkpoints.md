# Chapter 14: Checkpoints

**14.1 What is a recursive function’s base case?**

A subproblem that is simple enough to be solved directly. The point at which the recursion stops.



**14.2 What happens if a recursive function does not handle base cases correctly?**

You will experience an infinite loop and your computer will run out of memory (err, whatever’s allocated to run your program).



**14.3 What will the following program display?**

```C++
#include <iostream>
using namespace std;


// Function prototype
void showMe(int arg);
int main()
{
   int num = 0;


   showMe(num);
   return 0;
}
void showMe(int arg)
{
   if (arg < 10)
    showMe(++arg);
   else
    cout << arg << endl;
}
```

10



**14.4 What is the difference between direct and indirect recursion?**

In direct recursion, the function calls itself. In indirect recursion, a nested function calls the parent function.