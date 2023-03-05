#include<bits/stdc++.h>
using namespace std;
int main()
{
	float purchase_cost , discount =0, payable_cost;
	cout<<"Enter the purchase cost"<<endl;
	cin>>purchase_cost ;
	if(purchase_cost>1000)
	{
		discount= purchase_cost / 10.0;
	}
	payable_cost = purchase_cost/10.0;
	cout<<"Payable cost is ="<<payable_cost<<endl;
	
	return 0;
}
