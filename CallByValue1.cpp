#include<bits/stdc++.h>
using namespace std;

void swap(int *x , int *y)
{
	int temp ;
	temp = *x;
	*x=*y;
	*y= temp;
	
}

  int main()
  {
  	int a , b;
  	cin>>a>>b;
  	cout<<"Before Swapping ";
  	cout<<a<<"   "<<b<<endl;
	 
  	swap(&a, &b);
  	cout<<"After Swapping ";
  	cout<<a<<"   "<<b<<endl;
  	
  	return 0;
  }
