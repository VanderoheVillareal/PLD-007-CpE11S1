 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int x,y,sum,average,product,multiply,add;
 	
 		cout<<"Enter value of x: ";
 		cin>>x;
 		cout<<"Enter value of y: ";
 		cin>>y;
 	
 		sum=x+y;
 		average=sum/2;
 		product=x*x;
 		multiply=y*y;
 		add=product+multiply;
 	
 			cout<<"Sum of values: "<<sum<<endl;
 			cout<<"Average of values: "<<average<<endl;
 			cout<<"Squared of x: "<<product<<endl;
 			cout<<"Squared of y: "<<multiply<<endl;
 			cout<<"Sum of squared values: "<<add<<endl;

	return 0;
 }
