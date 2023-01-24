#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit , prod=1, sum=0, n;
    cin>>n;
    
    while(n>0)
    {
    	n=n%10;
    	if(digit%2==0)
    	sum = sum + digit;
    	else
    	prod = prod * digit;

    	n=n/10;
    	
	}
	cout<<"The sum of Even Digits"<<sum<<endl;
	cout<<"The prod of Odd Digits"<<prod<<endl;
	
	return 0;
}
