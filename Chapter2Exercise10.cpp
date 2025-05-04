/*

    File name: Chapter2Exercise10.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 2/20/2025 (Revised on 5/04/2025)
    Requirements summary:
        "Write a program that calculates the number of miles per gallon of gas a car gets."

*/

#include <iostream>

using namespace std;

int main()
{
    double gallons, miles;

    // Get input from the user
    cout << "Enter the number of gallons of gasoline: ";
    cin >> gallons;

    cout << "Enter the number of miles driven: ";
    cin >> miles;

    // Calculate miles per gallons
    double mpg = miles / gallons;

    // Output result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

   return 0;
}
