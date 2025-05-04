/*

    File name: Chapter2Exercise10.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 2/20/2025
    Requirements summary:
        "Write a program that calculates the number of miles per gallon of gas a car gets."

*/

#include <iostream>

using namespace std;

int main()
{
   // Hardcoded values for given problem
   double gallons = 15.0;
   double miles = 375.0;

   // Calculate miles per gallon
   double mpg = miles / gallons;

   // Output result
   cout << "A car holds 15 gallons of gasoline and can travel 375 miles before refueling.\nUsing the formula \"MPG = Miles Driven / Gallons of Gas Used\", we can determine that the car gets " << mpg << " miles per gallon." << endl;

   return 0;
}
