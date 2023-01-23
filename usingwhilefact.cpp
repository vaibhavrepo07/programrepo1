#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fact , n;
	cout<<"Coding with factoiral "<<endl;
	cin>>n;
	fact=1;
	while(n>=1)
	{
		fact = fact * n;
		n = n- 1;
	}
	cout<<"Factorial is = "<<fact<<endl;
	return 0;
}
