/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/29/19
** Description:  A function that takes an array of Person object and the size
**               of the array and returns the standard deviation of all the
**               ages.
*******************************************************************************/
#include "Person.hpp"
#include <cmath>
#include <iostream>

using std::pow;
using std::cout;
using std::endl;

double stdDev(Person people[], int size)
{
    double mean = 0,
           sum = 0, 
           variance = 0;

    // loop through our people array and add all the ages together
    for (int count = 0; count < size; count++)
    {
        Person person = people[count];
        sum += person.getAge();
    }

    // To find the mean, divide the total age sum by the total number of 
    // people. In this case, that's our size
    mean = sum / size;

    // To get the variance, we'll need to loop through our array again
    // but this time, we'll be subtracting our mean from each person's age
    // to get its distance from the mean. Then, we'll square that value.
    for (int count = 0; count < size; count++)
    {
        double ageMinusMean = people[count].getAge() - mean;
        variance += pow(ageMinusMean, 2);
    }

    // our total variance needs to be divided by the number of total people
    variance = variance / size;

    // the final standard deviation is the square root of the variance
    return sqrt(variance);
};

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

    cout << "The standard deviation of these data values is " << stdDev(people, NUMBER_OF_PEOPLE) << endl;

    return 0;
}