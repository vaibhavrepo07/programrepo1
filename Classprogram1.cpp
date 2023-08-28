#include<bits/stdc++.h>
using namespace std;

class name
{
	int a,b,t;
	
	public:
		void getdata(void);
		void putdata(void);
};

  void name::getdata(void)
  {
  	cout<<"Enter the Summation of Two Numbers"<<endl;
  	cin>>a>>b;
  }
  
  void name::putdata(void)
  {
     t = a+b ;
     cout<<"The Summation of Two Numbers are = "<<t<<endl;
  }
  
  int main()
  {
  	name obj ;
  	obj.getdata();
  	obj.putdata();
  	
  	return 0;
  }
