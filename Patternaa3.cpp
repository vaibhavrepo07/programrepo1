#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j; 
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3||i==3)
			cout<<"x";
			else
			cout<<"o";
		}
		cout<<endl;
	}
	return 0;
}
