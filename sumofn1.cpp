#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,sum=0;
	cin>>n;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}
