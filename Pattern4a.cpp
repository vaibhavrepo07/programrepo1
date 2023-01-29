#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin>> n; 
	
	cout<<"Printing the Star's Pattern ."<<"  "<<endl;
	int row = 1;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
		{
			cout<<" * "<<" ";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	return 0;
}
