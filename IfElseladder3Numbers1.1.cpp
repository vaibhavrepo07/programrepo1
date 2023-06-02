#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c ;
	cout<<"Coding with If else Ladder"<<endl;
	cin>>a>>b>>c;
	
	if((a>b) && (a>c))
	{
		cout<<"A is Greater than B and C"<<a<<endl;
	}
	else if((b>a) && (b>c))
	{
		cout<<"B is Greater than A and C"<<b<<endl;
	}
	else if((c>a) && (c>b))
	{
		cout<<"C is Greater than A and B"<<c<<endl;
	}
	
	return 0;
}
