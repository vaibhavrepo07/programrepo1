#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	int k=(n*(n+1))/2;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(i>=j)
			{
				cout<<setw(3)<<k--;
			}
			else
			{
				cout<<setw(3)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
