/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/29/19
** Description:  A function implementation for a Person object that contains a 
**               string name, a double age, and getter methods for both.
*******************************************************************************/
#include "Person.hpp"
#include <string>

using std::string;

/*********************************************************************
** Description: custom constructor to initialize name and age
*********************************************************************/
Person::Person(string personsName, double personsAge)
{
    name = personsName;
    age = personsAge;
}

/*********************************************************************
** Description: getter function for name
*********************************************************************/
string Person::getName()
{
    return name;
}

/*********************************************************************
** Description: getter function for age
*********************************************************************/
double Person::getAge()
{
    return age;
}