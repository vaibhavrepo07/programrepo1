#include<bits/stdc++.h>0
using namespace std;

class leap
{
	int y;
	public:
		void getdata(void)
		{
			cout<<"Coding with Leap Year"<<endl;
			cin>>y;
		}
		
		void putdata(void)
		{
			if(y%400==0 && y%100==0 || y%4==0 && y%100!=0)
			{
				cout<<"This is a Leap Year"<<endl;
			}
			else{
				cout<<"This is not a Leap Year"<<endl;
			}
		}
};

   int main()
   {
   	  leap L1;
   	  L1.getdata();
   	  L1.putdata();
   	  
   	  return 0;
   }
