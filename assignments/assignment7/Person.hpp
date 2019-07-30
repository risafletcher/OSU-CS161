/*******************************************************************************
** Author:       Risa Fletcher
** Date:         07/29/19
** Description:  A class specification for a Person object that contains a 
**               string name, a double age, and getter methods for both.
*******************************************************************************/
#ifndef PERSON
#define PERSON

#include <string>

using std::string;

class Person
{
    private:
        string name;
        double age;

    public:
        /*********************************************************************
        ** Description: custom constructor to initialize name and age
        *********************************************************************/
        Person(string, double);

        /*********************************************************************
        ** Description: getter function for name
        *********************************************************************/
        string getName();

        /*********************************************************************
        ** Description: getter function for age
        *********************************************************************/
        double getAge();
};

#endif