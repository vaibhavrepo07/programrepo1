#include<bits/stdc++.h>
using namespace std;

class demo
{
	int a;
	public:
		void getdata(void);
		friend int sqr(demo);
		
};
  
   void demo :: getdata(void)
   {
   	  cout<<"Enter the Digit to find the Square "<<endl;
   	  cin>>a;
   }
   
   int sqr(demo aa)
   {
   	   return (aa.a* aa.a);
   }
   
   int main()
   {
   	  demo aa;
   	  aa.getdata();
   	  cout<<"The Square of the digit is = "<<sqr(aa);
   	  
   	  return 0;
   }
