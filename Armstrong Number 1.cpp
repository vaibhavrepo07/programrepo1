#include<bits/stdc++.h>
using namespace std;
int main()
{
	int origNum ,num, rem ,sum=0,digit;
	cout<<"Enter a positive number"<<endl;
	cin>>origNum;
	
	num=origNum;
	
	while(num!=0)
	{
		digit=num%10;
		sum+=digit *digit *digit;
		num/=10;
	}
	if(sum==origNum )
	cout<<origNum <<"is an Armstrong Number"<<endl;
	else
	cout<<origNum<<"is not an Armstrong Number"<<endl;
	
	return 0;
}
