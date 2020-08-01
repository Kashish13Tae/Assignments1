#include<iostream>
using namespace std;
int main ()
{
	int A[10], n , i, j,x;
	cout<< "enter size of array: ";
	cin>> n;
	cout<< "enter elements of array: ";
	for(i=0; i<n; i++)
		cin>> A[i];
	for(i=0; i<n ; i++)
	{
for (j=i+1 ; j<n ; j++)
{
if (A[i] < A[j])
{
x = A[i];
A[i] = A[j];
A[j] = x;
}
}
}
cout<< "second  largest number : "<< A[1];
cout<< "second smallest number: "<<A[n-2];
return 0;
}


