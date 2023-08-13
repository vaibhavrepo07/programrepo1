#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, sum=0, n ;
	cout<<"Summation of Numbers"<<endl;
	cin>>n;
	
	while(i<=n)
	{
		sum = sum + i;
		cout<<" "<<sum<<endl;
		i=i+1;
		cout<<"The sum"<<endl;
	}
	
	return 0;
}
