#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(i>=j)
			cout<<j;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
