#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],i,j,k;
	cout<<"Apply 3-D Array "<<endl;
	cin>>i>>j>>k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<a[i][j][k];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
