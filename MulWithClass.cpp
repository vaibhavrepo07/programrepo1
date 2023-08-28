#include<bits/stdc++.h>
using namespace std;

class mul
{
	int a,b,t;
	public:
		void getdata(void);
		void putdata(void);
};

   void mul::getdata(void)
   {
   	 cout<<"Enter the Multiplication or Product of Numbers"<<endl;
   	 cin>>a>>b;
   	
   }
   
   void mul::putdata(void)
   {
   	  t=a*b;
		 cout<<"The Product of Two Numbers = "<<t <<endl;
   	  
   }
   
int main()
{
	mul m1;
	m1.getdata();
	m1.putdata();
	
	return 0;
}
