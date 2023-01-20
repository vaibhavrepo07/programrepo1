#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z;
	cin>>n;
	cout<<"Enter the Fibonacci Series"<<endl;
	x=0;
	y=1;
	z=0;
	while(z<=n)
	{
		cout<<"The value of z is ="<<z<<endl;
		x=y;
		y=z;
		z=x+y;
	}
	return 0;
}
