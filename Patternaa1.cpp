#include<bits/stdc++.h>
using namespace std;

int main()
{

int n=5; 
int i , j ,s;

for(i=1;i<=n;i++)
{
	for(s=n-1;s>-i;s--)
	{
		cout<<"  ";
	}
	for(j=1;j<=i;j++)
	{
		if(i%2!=0)
		cout<<(char)(j+64);
		else
		cout<<j;
	}
	cout<<endl;
}return 0;
}
