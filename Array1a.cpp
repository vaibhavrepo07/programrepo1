#include<bits/stdc++.h>
using namespace std;

int main()
{
	int no[7], i , sum=0;
	
	cout<<"Enter the Sum"<<endl;
	for(i=0 ; i<=7 ; i++)
	{
		cin>>no[i];
	}
	
	cout<<"The Sum is of Seven Numbers :"<<endl;
	for(i=0; i<=7; i++)
	{
		cout<<no[i];
		sum = sum + no [i];
	} 
	cout<<"Summation is ="<<sum<<endl;
	
	return 0;
}
