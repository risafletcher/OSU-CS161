#include "Box.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double width, height, length;
    cout << "Please enter 3 dimensions (doubles)." << endl;
    cin >> width >> height >> length;
    Box myBox(width, height, length);
    Box defaultBox;
    double myBoxVolume = myBox.calcVolume();
    double myBoxSurfaceArea = myBox.calcSurfaceArea();
    double defaultVolume = defaultBox.calcVolume();
    double defaultSurfaceArea = defaultBox.calcSurfaceArea();

    cout << "Your custom box volume is: ";
    cout << myBoxVolume << endl;
    cout << "Your custom box surface area is: ";
    cout << myBoxSurfaceArea << endl;
    cout << "The default box volume is: ";
    cout << defaultVolume << endl;
    cout << "The default box surface area is: ";
    cout << defaultSurfaceArea << endl;
    return 0;
}