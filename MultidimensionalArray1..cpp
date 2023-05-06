#include<bits/stdc++.h>
using namespace std;

int main()
{
	int no[3][3], i, j , sum=0;
	
	cout<<"Code with Multidimensional Array"<<endl;
	for(i=0; i<=3 ; i++)
	{
		for(j=0 ; j<=3 ; j++)
		{
			cin>>no[i][j];
		}
	}
	
	cout<<"The Summation of Three Numbers"<<endl;
	
	for(i=0 ; i<=3 ; i++)
	{
		for(j=0 ; j<=3 ; j++)
		{
			cout<<no[i][j]<<endl;
			sum=sum + no[i][j];
		}
		cout<<"Three Numbers are = "<<sum<<endl;
		cout<<endl;
		sum=0;
	}
	
   return 0;
}
