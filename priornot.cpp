#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the vlaue of n "<<endl;
	cin>>n;
	
	bool isPrime=1;
	
	for(int i=2;i<=n;i++)
	{
		//rem=0, not a prime
		if(n%i==0)
		{
			cout<<"Not a Prime Number"<<endl;
			isPrime=0;
			break;
		}
	}
	
	if(isPrime==0)
	{
		cout<<"Not a Prime Number"<<endl;
		
	}
	else
	{
		cout<<"is a prime Number"<<endl;
	}
	return 0;
}
