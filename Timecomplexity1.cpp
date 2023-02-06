#include<bits/stdc++.h>
using namespace std;

int main()     //Time Complexity = O(n^2).
{
	int a=0, b=0;
	int N;
	
	for(int i=0;i<=N ;i++)
	{
		for(int j=0;j<N;j++)
		{
			a=a+j;
		}
	}
	for(int k=0;k<N;k++)
	{
		b=b+k;
	}
	
	return 0;
}
