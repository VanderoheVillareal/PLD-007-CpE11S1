#include<iostream>
using namespace std;

int main ()
{
	//create a c++ program calculator
	int x,y,sum,difference,product,quotient;
	char z;
	
	cout<<"Input simple math problem: ";
	cin>>x>>z>>y;
	
	switch (z)
	{
		case '+':
			sum=(x+y);
			cout << "Input sum: " <<sum<<endl;
			break;
		case '-':	
			difference=(x-y);
			cout << "Input difference: " <<difference<<endl;
			break;
		case '*':
			product=(x*y);
			cout << "Input product: " <<product<<endl;
			break;
		case '/':
			quotient=(x/y);
			cout << "Input quotiet: " <<quotient<<endl;
			break;
			
		default:
		{cout<<"ERROR! try simple problems | Ex. '5+5'";
		break;}	
	}
		
}
