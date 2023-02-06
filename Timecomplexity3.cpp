#include<bits/stdc++.h>
using namespace std;

int main()      //Time Complexity = O(n^2).
{
	int a=0, N;
	
	for(int i=0;i<N;i++)
	{
		for(int j=N;j>i;j--)
		{
			a=a+i+j;
		}
	}
	return 0;
}
