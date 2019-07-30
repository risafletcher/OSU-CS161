#include <iostream>
#include <string>

#include "Person.hpp"
#include "stdDev.cpp"

using std::cout;
using std::endl;

int main()
{
    const int NUMBER_OF_PEOPLE = 5;
    Person people[NUMBER_OF_PEOPLE] = {
        Person("Bob", 12.5),
        Person("Barbara", 7.0),
        Person("Susan", 10.0),
        Person("Shirley", 7.8),
        Person("Laura", 15.5)
    };

    cout << "The standard deviation of these data values is " << stdDev(people, NUMBER_OF_PEOPLE);

    return 0;
}