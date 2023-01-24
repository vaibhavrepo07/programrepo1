#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, fact;
	cout<<"Enter the Number"<<endl;
	cin>>n;
	fact=1;
	while(n>=1)
	{
		fact=fact*n;
		n=n-1;
	}
	cout<<fact <<endl;
	
	return 0;
}
