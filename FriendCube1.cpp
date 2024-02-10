#include<bits/stdc++.h>
using namespace std;

class demo
{
	int a;
	public:
		void getdata(void);
		friend int cube(demo);
};
  
   void demo::getdata()
   {
   	cout<<"Enter the Digit to find the Cube of the Number"<<endl;
   	cin>>a;
   }
   
   int cube(demo aa)
   {
   	   return (aa.a* aa.a* aa.a);
   }

   int main()
   {
   	  demo aa;
   	  aa.getdata();
   	  cout<<"The Cube of the Digit is ="<<cube(aa);
   	  
   	  return 0;
   }
