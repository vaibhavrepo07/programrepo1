#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum;
	int arr[5];
	
	cout<<"Enter any Five Integer Numbers"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	
	sum=0;
	for(i=0 ;i<5; i++)
	{
		sum = sum + arr[i];
	}
	cout<<"The Sum of the Array Elements is ="<<sum<<endl;
	
	return 0;
}
