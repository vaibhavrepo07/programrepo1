#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin>> n; 
	
	cout<<"Coding with summation of N numbers"<<endl;
	int sum=0;
	
	for(int i=1;i<=n;i++)
	{
		sum+=i;
		
	}
	cout<<sum;
	
	return 0;
}
