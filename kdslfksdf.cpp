#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum = 0;
	cout<<"Enter the sum of three digits"<<endl;
	cin>>n;
	while(n>0)
	{
		sum = sum+n%10;
		n = n/10;
	}
	cout<<"The digits are ="<<sum<<endl;
	
	return 0;
	
}
