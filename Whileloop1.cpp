#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i , j=1;
	while(j<=4)
	{
		i=1;
		while(i<=j)
		{
			cout<<" * "<<"    ";
			i++;
		}
		cout<<"\n"<<"    "<<endl;
		j++;
	}
	return 0;
}
