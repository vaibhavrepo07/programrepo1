#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5]={2,7,1,-4,11};
    int n;
    cin>>n;
	
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<"   ";
		n=n+i;
	}
	cout<<n;
	return 0;
}
