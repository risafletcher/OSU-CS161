#include "Taxicab.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x, y;
    cout << "Please enter the taxi's initial coordinates, starting with ";
    cout << "latitude then longitude of the type int." << endl;
    cin >> x >> y;
    Taxicab myTaxicab(x, y);
    
    cout << "Please enter the taxi's latitudinal movement as an int." << endl;
    cin >> x;
    myTaxicab.moveX(x);
    cout << "Please enter the taxi's longitudinal movement as an int." << endl;
    cin >> y;
    myTaxicab.moveY(y);

    cout << "The taxi's current latitudinal coordinate is: ";
    cout << myTaxicab.getXCoord() << endl;
    cout << "The taxi's current longitudinal coordinate is: ";
    cout << myTaxicab.getYCoord() << endl;
    cout << "The distance traveled is: ";
    cout << myTaxicab.getDistanceTraveled() << endl;
    return 0;
}