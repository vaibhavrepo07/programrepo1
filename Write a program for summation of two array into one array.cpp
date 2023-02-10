//WAP to Read two arrays of size of 5 and store sum of the these arrays into the third arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5], b[5], c[5] , i ;
	cout<<"Enter the First  Arrays Size of an Element "<<endl;
	for(i=0 ; i<5 ; ++i)
	{
		cin>> a[i];
	}
	cout<<"Enter the Second Arrays Size of an Element  "<<endl;
	for(i=0 ;i<5 ; ++i)
	{
		cin>> b[i];
	}
	cout<<"Now see the summation of two arrays in one Array = "<<endl;
	for(i=0 ;i<5 ;++i)
	{
		c[i] =  a[i] + b[i];
		cout<< c[i]<<endl;
	}
	 return 0 ;
}

	
