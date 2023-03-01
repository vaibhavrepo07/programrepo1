#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three Number"<<endl;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(b>c)
		cout<<a<<"is Largest"<<endl;
		else
		cout<<c<<"is Largest"<<endl;
	}
	else
	{
		if(b>c)
		cout<<b<<"is Largest"<<endl;
		else
		cout<<c<<"is Largest"<<endl;
	}
	
	return 0;
}
