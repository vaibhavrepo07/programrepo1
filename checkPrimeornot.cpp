#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, count=0, j;
	
	cout<<"Enter a Number";
	cin>>i;
	j=1;
	while(j<=i)
	{
		if(i%j==0)
		count++;
		j++;
	}
	if(count==2)
	cout<<"Prime Number "<<endl;
	else
	cout<<"Composite Number"<<endl;
	
	return 0;
}
