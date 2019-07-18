# Chapter 7: Checkpoints

**7.1 Which of the following shows the correct use of the scope resolution operator in a member function definition?**

​	A.  `InvItem::void setOnHand(int units)`

​	**B.  `void InvItem::setOnHand(int units)`**



**7.2 An object’s private member variables can be accessed from outside the object by**

​	**A.  public member functions**

​	B.  any function

​	C.  the dot operator

​	D.  the scope resolution operator



**7.3 Assuming that `soap` is an instance of the `Inventory` class, which of the following is a valid call to the `setOnHand` member function?**

​	A. `setOnHand(20);`

​	B. `soap::setOnHand(20);`

​	**C. `soap.setOnHand(20);`****

​	D. `Inventory.setOnhand(20);`



**7.4 Complete the following code skeleton to declare a class called `Date`. The class should contain member variables and functions to store and retrieve the month, day, and year components of a date.**

```C++
class Date
{
    private:
    	int month;
    	int day;
    	int year;
    public:
    	void setDate(int m, int d, int y);
    
    	int getMonth
        {	return month; }
    
    	int getDay
        {	return day; }
    
    	int getYear
        {	return year; }
}

void Date::setDate(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}
```



**7.5 Briefly describe the purpose of a constructor.**

A constructor is a private member function whose primary use is to initialize member variables. Initializing member variables this way is most compatible with older versions of C++ since in-place member initialization is new to C++ 11.



**7.6 Constructor functions have the same name as the**

​	**A.  class**

​	B.   class instance

​	C.  program

​	D.  none of the above



**7.7 A constructor that requires no arguments is called**

​	**A.  a default constructor**

​	B.  an inline constructor

​	C.  a null constructor

​	D.  none of the above



**7.8 Assume the following is a constructor:**

```C++
ClassAct::ClassAct(int x)
{
    item = x;
}
```

**Define a `ClassAct` object called `sally` that passes the value 25 to the constructor**

```C++
ClassAct sally(25);
```



**7.9 True or false: Like any C++ function, a constructor may be overloaded, providing each constructor has a unique parameter list.**

True



**7.10 True or false: A class may have a constructor with no parameter list and an overloaded constructor whose parameters all take default arguments.**

False



**7.11 A destructor function name always starts with**

​	A.  a number

​	**B  the tilde character (`~`)**

​	C.  a data type name

​	D.  the name of the class



**7.12 True or false: Just as a class can have multiple constructors, it can also have multiple destructors.**

False



**7.13 What will the following program code display on the screen?**

```C++
class Tank
{
    private:
    	int gallons;
    public:
    	Tank()
        	{ gallons = 50; }
    	Tank(int gal)
        	{ gallons = gal; }
    	int getGallons()
        	{ return gallons; }
};
int main()
{
    Tank storage1, storage2, storage3(20);
    cout << storage1.getGallons() << endl;
    cout << storage2.getGallons() << endl;
    cout << storage3.getGallons() << endl;
    return 0;
}

// OUTPUT
50
50
20
```



**7.14 What will the following program code display on the screen?**

```C++
class Package
{
    private:
    	int value;
    public:
    	Package()
        	{ value = 7; cout << value << endl; }
    	Package(int v)
        	{ value = v; cout << value << endl; }
    	~Package()
        	{ cout << "goodbye" << endl; }
};
int main()
{
    Package obj1(4);
    Package obj2;
    return 0;
}

// OUTPUT
4
7
goodbye
```

