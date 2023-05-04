#include<bits/stdc++.h>
using namespace std;

void swap(int *x ,int *y);

main()
{
	int x=10,y=20;
	cout<<"Before Swapping "<<endl;
	swap(*x, *y);
	cout<<"After Swapping "<<endl;
	cout<<"The value of x is ="<<*x<<"   "<<"The value of y is ="<<*y<<endl;
}

  void swap(int *x, int *y)
  {
  	 *x = *y +*x; 
  	 *y = *y-*x;
  	 *y = *x-*y;
  	 
  	 cout<<"The value of x is ="<<*x<< "The value of y is ="<<*y<<endl;
  }
