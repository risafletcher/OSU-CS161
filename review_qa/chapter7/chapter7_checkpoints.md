# Chapter 7: Checkpoints

**7.1 Which of the following shows the correct use of the scope resolution operator in a member function definition?**

​	A. `InvItem::void setOnHand(int units)`

​	**B. `void InvItem::setOnHand(int units)`**



**7.2 An object’s private member variables can be accessed from outside the object by**

​	**A. public member functions**

​	B. any function

​	C. the dot operator

​	D. the scope resolution operator



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

