#include<bits/stdc++.h>
using namespace std;

class square
{
	int s;
	public:
		void getdata(void)
		{
			cout<<"Enter the Number for Area of Square"<<endl;
			cin>>s;
		}
		void perform(void)
		{
			s=s*s;
			cout<<"The Area of Square is = "<< s <<endl;
		}
	
};

   int main()
   {
   	   square s1;
   	   s1.getdata();
   	   s1.perform();
   	   
   	   return 0;
   }
