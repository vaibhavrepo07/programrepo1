#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

 int main()
 {
 	int a, b ;
 	cout<<"Before swapping ";
 	cout<<a<<"   "<<b<<endl;
 	cin>>a>>b;
 	swap(&a,&b);
 	cout<<"After Swapping";
 	cout<<a<<"  "<<b<<endl;
 	
 	return 0;
 }
