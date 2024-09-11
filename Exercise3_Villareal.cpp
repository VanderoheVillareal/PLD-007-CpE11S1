#include<iostream>
using namespace std;

int main()
{
	int x;
	int num;
	
	cout<<"Grade of the Student"<<endl;
	cout<<"Input Percentage Grade: ";
	cin>>x;
	
	if ((x>=94)&&(x<=100))
	{
		cout<<"Excellent";
	}
	else if ((x>=88.5)&&(x<=93.99))
	{
		cout<<"Superior";
	}
	else if ((x>=83)&&(x<=88.49))
	{
		cout<<"Meritorious";
	}
	else if ((x>=77.5)&&(x<=82.99))
	{
		cout<<"Very Good";
	}
	else if ((x>=72)&&(x<=77.49))
	{
		cout<<"Good";
	}
	else if ((x>=65.5)&&(x<=71.99))
	{
		cout<<"Very Satisfactory";
	}
	else if ((x>=61)&&(x<=65.49))
	{
		cout<<"Satisfactory";
	}
	else if ((x>=55.5)&&(x<=60.99))
	{
		cout<<"Fair";
	}
	else if ((x>=50)&&(x<=55.49))
	{
		cout<<"Passing";
	}
	else if ((x>=0)&&(x<=49.99))
	{
		cout<<"Failed";
	}
	else
	{
		cout<<"ERROR! Please input a value that ranges from 0-100";
	}
	
	return 0;
}
