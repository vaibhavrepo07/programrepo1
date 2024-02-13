#include<bits/stdc++.h>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"Base Class"<<endl;
		}
};
 
 class B: public A
 {
 	public:
 		void show1()
 		{
 			cout<<"Derived Class"<<endl;
		 }
 };
 
  int main()
  {
  	A *bptr;
  	A aa;
  	bptr = &aa;
  	bptr ->show();
  	
  	return 0;
  }
