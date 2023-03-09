#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0, i;
	
	int n;
	cout<<"Enter the Sum of Natural Numbers"<<endl;
	cin>>n;
	
	while(i<=n)
	{
			
		sum=sum+i;
		i=i+1;
		cout<<sum<<" "<<endl;
	}

			
	return 0;
}
