#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0, i;
	int n;
	cout<<"Sum of all Even Natural Numbers"<<endl;
	cin>>n;
	
	while(i%2==0)
	{
		sum=sum+i;
		i=i+1;
		cout<<sum<<"  "<<endl;
	}
	
	return 0;
}
