#include<bits/stdc++.h>
using namespace std;

void swap(int & , int &);

main()
{
	int x=10,y=20;
	cout<<"In Main"<<endl;
	cout<<"X = "<<x<<"Y ="<<y<<endl;
	swap(x,y);
	cout<<"IN Main Again"<<endl;
	cout<<"X ="<<x<<"Y ="<<y<<endl;
	
}
  
   void swap(int &x, int &y)
   {
   	   x=x+y;
   	   y=x-y;
   	   x=x-y;
   	   
   	   cout<<"IN swap"<<endl;
   	   cout<<"X ="<<x<<"Y ="<<y<<endl;
   }
