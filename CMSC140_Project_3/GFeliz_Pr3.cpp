/*
* Class: CMSC140 CRN 20780
* Instructor: Madhvi Shah
* Project3
* Description: Program that asks for the weight of the package and the distance it is to be shipped, and then displays the charges.
* Due Date: 10/09/2017
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Gabriel I Feliz
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int //Declare and initialize constant variables
		RATE_MILES1 = 1,
		RATE_MILES2 = 2,
		RATE_MILES3 = 3,
		RATE_MILES4 = 4,
		RATE_MILES5 = 5,
		RATE_MILES6 = 6;
	const double //Declare and initialize constant variables
		RATE_WEIGHT1 = 1.10,
		RATE_WEIGHT2 = 2.20,
		RATE_WEIGHT3 = 3.70,
		RATE_WEIGHT4 = 4.80;
	double //Declare double/int variables
		weightPackageKilograms,
		distancePackageMiles;

	cout << fixed << showpoint << setprecision(2); // Set values to two places after the decimal point.
	cout << "      SHIPPING CHARGES" << endl; // Display title of program.
	cout << endl;
	cout << "Enter the weight of the package in kilograms (max 20 kg): "; //Ask for weight of package
	cin >> weightPackageKilograms; // Read weight of package.
	cout << "Enter the distance the package is to be shipped (min 10 Mi, max 3000 Mi): "; //Ask for distance the package is to be shipped
	cin >> distancePackageMiles; // Read distance the package is to be shipped.
	cout << endl;
	cout << endl;

	if (weightPackageKilograms > 0 && weightPackageKilograms <= 2) //If weight of package in kilograms is in the range (0, 2] 
	{
		RATE_WEIGHT1;
	}
	else if (weightPackageKilograms > 2 && weightPackageKilograms <= 6) //If weight of package in kilograms is in the range (2, 6]  
	{
		RATE_WEIGHT2;
	}
	else if (weightPackageKilograms > 6 && weightPackageKilograms <= 10) //If weight of package in kilograms is in the range (6, 10]  
	{
		RATE_WEIGHT3;
	}
	else if (weightPackageKilograms > 10 && weightPackageKilograms <= 20) //If weight of package in kilograms is in the range (10, 20]  
	{
		RATE_WEIGHT4;
	}


	// Multiply RATE_WEIGHT1 by rate of miles and store in shippingCost. Display stored value. 
	if ((distancePackageMiles >= 10 && distancePackageMiles <= 500) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES1) << endl;
	}
	else if ((distancePackageMiles > 500 && distancePackageMiles <= 1000) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES2) << endl;
	}
	else if ((distancePackageMiles > 1000 && distancePackageMiles <= 1500) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES3) << endl;
	}
	else if ((distancePackageMiles > 1500 && distancePackageMiles <= 2000) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES4) << endl;
	}
	else if ((distancePackageMiles > 2000 && distancePackageMiles <= 2500) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES5) << endl;
	}
	else if ((distancePackageMiles > 2500 && distancePackageMiles <= 3000) && (weightPackageKilograms > 0 && weightPackageKilograms <= 2))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT1 * RATE_MILES6) << endl;
	}


	// Multiply RATE_WEIGHT2 by rate of miles and store in shippingCost. Display stored value. 
	if ((distancePackageMiles >= 10 && distancePackageMiles <= 500) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES1) << endl;
	}
	else if ((distancePackageMiles > 500 && distancePackageMiles <= 1000) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES2) << endl;
	}
	else if ((distancePackageMiles > 1000 && distancePackageMiles <= 1500) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES3) << endl;
	}
	else if ((distancePackageMiles > 1500 && distancePackageMiles <= 2000) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES4) << endl;
	}
	else if ((distancePackageMiles > 2000 && distancePackageMiles <= 2500) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES5) << endl;
	}
	else if ((distancePackageMiles > 2500 && distancePackageMiles <= 3000) && (weightPackageKilograms > 2 && weightPackageKilograms <= 6))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT2 * RATE_MILES6) << endl;
	}


	// Multiply RATE_WEIGHT3 by rate of miles and store in shippingCost. Display stored value. 
	if ((distancePackageMiles >= 10 && distancePackageMiles <= 500) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES1) << endl;
	}
	else if ((distancePackageMiles > 500 && distancePackageMiles <= 1000) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES2) << endl;
	}
	else if ((distancePackageMiles > 1000 && distancePackageMiles <= 1500) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES3) << endl;
	}
	else if ((distancePackageMiles > 1500 && distancePackageMiles <= 2000) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES4) << endl;
	}
	else if ((distancePackageMiles > 2000 && distancePackageMiles <= 2500) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES5) << endl;
	}
	else if ((distancePackageMiles > 2500 && distancePackageMiles <= 3000) && (weightPackageKilograms > 6 && weightPackageKilograms <= 10))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT3 * RATE_MILES6) << endl;
	}


	// Multiply RATE_WEIGHT4 by rate of miles and store in shippingCost. Display stored value. 
	if ((distancePackageMiles >= 10 && distancePackageMiles <= 500) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES1) << endl;
	}
	else if ((distancePackageMiles > 500 && distancePackageMiles <= 1000) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES2) << endl;
	}
	else if ((distancePackageMiles > 1000 && distancePackageMiles <= 1500) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES3) << endl;
	}
	else if ((distancePackageMiles > 1500 && distancePackageMiles <= 2000) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES4) << endl;
	}
	else if ((distancePackageMiles > 2000 && distancePackageMiles <= 2500) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES5) << endl;
	}
	else if ((distancePackageMiles > 2500 && distancePackageMiles <= 3000) && (weightPackageKilograms > 10 && weightPackageKilograms <= 20))
	{
		cout << "The cost to ship your package is $" << (RATE_WEIGHT4 * RATE_MILES6) << endl;
	}


	// Define input validation. These are the invalid inputs.
	if (weightPackageKilograms > 20)
	{
		cout << "We do not ship packages more than 20 Kg." << endl;
	}
	if (distancePackageMiles < 10 || distancePackageMiles > 3000)
	{
		cout << "We do not ship less than 10 miles or more than 3000 miles." << endl;
	}

	cout << "Programmer: Gabriel I Feliz" << endl; 	// Display programmer's name. 
	return 0;
}