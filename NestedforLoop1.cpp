//Write a program on Nested For LOOp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j;
	cout<<"Coding with Nested For Loop"<<endl;
	for(j=1 ; j<=4; j++)
	{
		for(i=1; i<=j ;i++)
		{
			cout<< "*" ;
		}
		cout<<endl;
	}
	return 0;
}
