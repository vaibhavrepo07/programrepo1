#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
      int temp;
      temp = *x;
      *x=*y;
      *y=temp;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Before Swapping ";
	cout<<"The value of A is = "<< a << endl <<"The value of B is = "<<b<<endl;
	
	swap(&a, &b);
	cout<<"After Swapping ";
	cout<<"The value of a is ="<<a<<endl<<"The vlaue of b is ="<<b;
	return 0;
}
