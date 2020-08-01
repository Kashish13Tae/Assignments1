#include<iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"Enter three numbers ";
	cin >> a >> b >> c;
	
	if ( a>=b && a>=c)
	{
		cout<<"The greatest number is :  "<< a;
	}
	if (b>=c && b>=a)
	{
		cout<<"The greatest number is : "<< b;
	}
	if (c>=a && c>= b)
	{
		cout<<"The greatest number is : "<<c;
	}
return 0;
}
