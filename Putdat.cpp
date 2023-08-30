#include<bits/stdc++.h>
using namespace std;

class Dell
{
	long long int a;
	public:
		void getdata(void)
		{
			cout<<"Enter the Numbers"<<endl;
			cin>>a;
		}
		
		void putdata(void)
		{
			if(a>100)
			{
				cout<<"A is Greater than 100"<<a<<endl;
			}
		}
};

  int main()
  {
  	 Dell d1;
  	 d1.getdata();
  	 
  	 return 0;
  }
