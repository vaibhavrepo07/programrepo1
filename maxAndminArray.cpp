#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i , j ,arr[5], min ,max;
	
	cout<<"Enter Five Integer Numbers"<<endl;
    for(i=0; i<5; i++)
	{
		cin>>arr[i];
		}	 
		
		min = arr[0];
		max = arr[0];
		
		for(i=0; i<5; i++)
		{
			if(min>arr[i])
			min=arr[i];
			if(max<arr[i])
			max=arr[i];
		}
		
		cout<<"Minimum value is ="<<min<<endl;
		cout<<"Maximum Value is ="<<max<<endl;
		
return 0;		
} 

