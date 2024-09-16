#include<iostream>
using namespace std;

int main()
{
	int a,b=9, c=9, d=4;
	
	cout<<"Integers less than 10 but more than 3 using FOR loop"<<endl;
	cout<<endl;
	
	for(a=4;a<=b;a++)
	{cout<<"Integer value: "<<a<<endl;}
	cout<<endl;
	
	cout<<"Integers less than 10 but more than 3 using WHILE loop"<<endl;
	cout<<endl;
	while (c>3)
	{cout<<"Integer Value: "<<c<<endl;
	c=c-1;}
	cout<<endl;
	
	cout<<"Integers less than 10 but more than 3 using DO-WHILE loop"<<endl;
	cout<<endl;
	do
	{cout<<"Integer Value: "<<d<<endl;
	d++;}
	while(d<=9&&d>=2);

	return 0;
}
