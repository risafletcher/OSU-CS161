#include "HalfOpenCylinder.hpp"
#include "Vase.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double
        height1,
        radius1,
        costPerSquareInch1,
        height2,
        radius2,
        costPerSquareInch2;

    cout << "Please enter a height and radius" << endl;
    cin >> height1 >> radius1;

    HalfOpenCylinder hoc1(height1, radius1);
    cout << "The cylinder's surface area is " << hoc1.surfaceArea() << endl;

    cout << "Enter a cost per square inch for a Vase." << endl;
    cin >> costPerSquareInch1;

    Vase vase1(hoc1, costPerSquareInch1);
    cout << "Your vase's total cost is: " << vase1.totalCost() << endl;

    cout << "Enter a height and radius for a second cylinder" << endl;
    cin >> height2 >> radius2;;

    HalfOpenCylinder hoc2(height2, radius2);
    cout << "The second cylinder's surface area is " << hoc2.surfaceArea() << endl;

    cout << "Enter a cost per square inch for a second Vase." << endl;
    cin >> costPerSquareInch2;

    Vase vase2(hoc2, costPerSquareInch2);
    cout << "Your second vase's total cost is: " << vase2.totalCost() << endl;

    if (vase1.costsMoreThan(vase2))
        cout << "Vase 1 costs more than Vase 2." << endl;
    else
        cout << "Vase 2 costs more than Vase 1." << endl;

    return 0;
}
