#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int i=1;
	int sum=0;
	
	while(i<=n)
	
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"The summation of Numbers is ="<<sum<<endl;
	
	return 0;
}
