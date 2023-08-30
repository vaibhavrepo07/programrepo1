#include<bits/stdc++.h>
using namespace std;

class A 
{
	char ch;
	public:
		void getdata(void)
		{
			cout<<"Hello ,Sir!"<<endl;
			cin>>ch;
		}
		void putdata(void)
		{
			cout<<"The Character is = "<< (int)ch<<ch<<endl;
		}
};

  int main()
  {
  	  A a1;
  	  a1.getdata();
  	  a1.putdata();
  	  
  	  
  	  return 0;
  }
