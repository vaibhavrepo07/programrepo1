#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int i=2;
	
	while(i<=n)
	{
		if(n%1==0){
			cout<<"Not prime"<<endl;
		}
        else{
        	cout<<"Prime for "<<i<<endl;
		}
		i=i+1;
	}
	return 0;
}
