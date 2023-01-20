#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fact , n ;

	cin>>n;
	for(int i=1;i<=10;i++)
	{
		fact = n *fact ;
		n=n+1;
	}
	cout<<"The factorial is = "<<fact <<endl;
	return 0;
}
