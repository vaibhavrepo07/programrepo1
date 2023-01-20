#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , mod ;
	cin>>n ;
	cout<<"Enter the mod ";
	while(n>0)
	{
		mod = mod%n%10;
		n=n/10;
	}
	cout<<"The mod value is ="<<mod<<endl;
	
	return 0;
}
