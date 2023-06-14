//Triangle Identifier - Jordan Brown - 9/13/19 - HONORS
//This program takes user input 3 sides and outputs the triangle type

//Initialization
#include <iostream>
#include <iomanip>
using namespace std;

//Main Program
int main ()
{
	//Initialize Variables
	double side1,side2,side3;
	
	//pretty space
	cout << endl;
	
	
	//Gather User Inputs
	cout << "Enter the length of the first side: ";
	cin >> side1;
	cout << "Enter the length of the second side: ";
	cin >> side2;
	cout << "Enter the length of the third side: ";
	cin >> side3;
	
	//Begin logic and outputs: 3 decimal points
	cout << setprecision(3) << fixed;
	
	//Test for validity - Length
	if (side1 >= side2 + side3 || side2 >= side1 + side3 || side3 >= side1 + side2)
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese sides do not create a triangle.\n" << endl;
	
	//Test for validity - Scalar (Redundant because of first statement but it's cool looking)
	else if (side1 <= 0 || side2 <= 0 || side3 <= 0)
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese are not valid scalar values, must be positive integers greater than 0.\n" << endl;
	
	//Test for equilateral
	else if (side1 == side2 && side2 == side3)
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese sides create an equilateral triangle.\n" << endl;
	
	//Check for Isosceles
	else if (side1 == side2 || side2 == side3 || side1 == side3)
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese sides create an isosceles triangle.\n" << endl;
	
	//Check for right triangle
	else if (((side1 * side1) == (side2 * side2) + (side3 * side3)) || ((side2 * side2) == (side1 * side1) + (side3 * side3)) || ((side3 * side3) == (side1 * side1) + (side2 * side2)))
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese sides create a right triangle.\n" << endl;
	
	//Else must be scalene
	else
		cout << "\nGiven the lengths of " << side1 << ", " << side2 << ", and " << side3 << "\nThese sides create a scalene triangle.\n" << endl;

	return 0;
}

		
