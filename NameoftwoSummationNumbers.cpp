#include<bits/stdc++.h>
using namespace std;

class name 
{
	int a,b,c;
	public:
		void getdata(void)
		{
			cout<<"Enter the Number"<<endl;
			cin>>a>>b;
			
		}
		
		void putdata(void)
		{
			c=a+b;
			cout<<"The Summation of Two Numbers = "<< c <<endl;
		}
};

   int main()
   {
   	   name n1;
   	   n1.getdata();
   	   n1.putdata();
   	   
   	   return 0;
   }
