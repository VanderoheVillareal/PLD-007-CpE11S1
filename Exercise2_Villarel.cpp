#include <iostream>
using namespace std;

int main()
{
	// Variables
	int x, y, average, sum, difference, product, remainder;
	float quotient;
	
	cout << "Inputs:" <<endl;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	cout << "" <<endl;
	
	// Calculation of Average
	average = (x + y) / 2;
	// Calculating the Sum
	sum = (x + y);
	// Calculating the Difference
	difference = (x - y);
	// Calculating the Product
	product = (x * y);
	// Calculating the Quotient
	quotient = (x / y);
	// Calculating the Remainder
	remainder = (x % y);
	
	// Print the Average
	cout << "Input average: " << average << endl;
	// Print the Sum
	cout << "Input sum: " << sum << endl;
	// Print the Difference
	cout << "Input difference: " << difference << endl;
	// Print the Product
	cout << "Input product: " << product << endl;
	// Print the Quotient
	cout << "Input quotient: " << quotient << endl;	
	// Print the Remainder
	cout << "Input remainder: " << remainder << endl;
	
	;return 0;
}
