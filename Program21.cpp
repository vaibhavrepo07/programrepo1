#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=2;
	int sum=0,n;
	cin>>n;
	while(n<=20)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<"  "<<sum<<endl;
	
	return 0;
}
