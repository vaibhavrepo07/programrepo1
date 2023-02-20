#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z;
	cout<<"Coding with Fibonacci Series"<<endl;
	cin>>n;
	x=0;
	y=1;
	for(z=0;z<=n;z=x+y)
	{
		x=y;
		y=z;
	}
	return 0;
}
