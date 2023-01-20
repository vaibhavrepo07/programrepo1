#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fact , n ;
	fact=1;
	cout<<"Enter the Factorial Numbers "<<endl;
	cin>>n;
	for( ; n>=1;n=n-1)
	{
		fact=fact * n;
	}
	cout<<"The Factorial is ="<<fact <<endl;
	return 0;
}

