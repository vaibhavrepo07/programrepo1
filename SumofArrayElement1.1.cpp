#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum ;
	int arr[5];
	
	cout<<"Enter any five Integer Numbers"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>> arr[i];
	}
	sum=0;
	for(int i=0; i<5 ;i++)
	{
		sum = sum + arr[i];
	}
	cout<<"The sum of the Array Elements are :::"<<sum<<endl;
	
	return 0;
}
