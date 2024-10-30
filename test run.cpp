#include <iostream>
#include <string>
using namespace std;

int main ()	
{
	char input1[4]={'p','P','5','!'};
	char input2[4]={'D','d','8','&'};
	char input3[6]={'u','7','$','L','U','l'};
	string lower[2]={"is a lowercase letter","is not a lowercase letter"};
	string upper[2]={"is an uppercase letter","is not an uppercase letter"};
	string convert[2]={"is converted to uppercase is ","is converted to lowercase is "};
	
	cout<<"According to islower:"<<endl<<endl;
	int i=0,j=0;
	for	(i=0;i<=j;i++)
	{
		cout<<input1[0]<<" "<<lower[0]<<endl;
		cout<<input1[1]<<" "<<lower[1]<<endl;
		cout<<input1[2]<<" "<<lower[1]<<endl;
		cout<<input1[3]<<" "<<lower[1]<<endl<<endl;
		
	}

	cout <<"According to isupper:"<<endl<<endl;
	int x=0,y=0;
	for	(x=0;x<=y;x++)
	{
		cout<<input2[0]<<" "<<upper[0]<<endl;
		cout<<input2[1]<<" "<<upper[1]<<endl;
		cout<<input2[2]<<" "<<upper[1]<<endl;
		cout<<input2[3]<<" "<<upper[1]<<endl<<endl;
		
	}
	
	cout<<endl;
	{
		cout<<input3[0]<<" "<<convert[0]<<input3[4]<<endl;
		cout<<input3[1]<<" "<<convert[0]<<input3[1]<<endl;
		cout<<input3[2]<<" "<<convert[0]<<input3[2]<<endl;
		cout<<input3[3]<<" "<<convert[1]<<input3[5]<<endl;
		
	}
	
	return 0;
}

