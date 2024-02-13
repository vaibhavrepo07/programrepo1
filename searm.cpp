#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp, sum=0, r;
	
	cout<<"Enter the Code for Armstrong"<<endl;
	cin>>n;
	
	temp=n;
	
	while(n>0)
	{
		n=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"Its a Armstrong number "<<endl;
	}else
	{
		cout<<"Its' Composite Number"<<endl;
	}
	return 0;
}

