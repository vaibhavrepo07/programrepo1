#include<bits/stdc++.h>
using namespace std;

void swap(int &, int &);
main()
{
	int x=10, y=20;
	cout<<"IN main"<<endl;
	cout<<"X ="<<x<<"Y="<<y<<endl;
	swap(x,y);
	cout<<"IN main Again"<<endl;
	cout<<"X ="<<x<<"Y ="<<endl;
	
}


  void swap(int &x, int &y)
  {
  	x=x+y;
  	y=x-y;
  	x=x-y;
  	
  	cout<<"In swap"<<endl;
  	cout<<"X ="<<x<<"Y="<<y<<endl;
  }
  
  
  
  
