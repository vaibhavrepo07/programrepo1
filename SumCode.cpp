#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cout<<"Summation of All Given Even Numbers"<<endl;
	cin>>n;
	
	int i, sum=0;
	
	while(i<=n)
	{
		sum = sum + i ;
		i = i + 2;		
	}
	
	cout<<"The Sum is ="<<sum<<endl;

	return 0;
}
