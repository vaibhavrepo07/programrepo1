#include<bits/stdc++.h>
using namespace std;

class A 
{
	int a,b,t ;
	public:
		void getdata(void);
		void putdata(void);
	};
	
	void A ::getdata(void)
	{
		cout<<"Addition of Two Numbers"<<endl;
		cin>>a>>b;
	}
	
	void A :: putdata(void)
	{
		t = a+b;
		cout<<"Addition of Numbers are = "<< t<<endl;
	}

	int main()
	{
		A a1;
		a1.putdata();
		a1.getdata();
		
		return 0;
	}
	
