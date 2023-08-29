#include<bits/stdc++.h>
using namespace std;

class A
{
	int a,b,t;
	public:
		void putdata()
		{
			cout<<"Enter the Numbers"<<endl;
			cin>>a>>b;
		}
		void getdata()
		{
		    t = a+b;
		    cout<<"The sum is = "<< t <<endl;
		}
		
};
    int main()
    {
    	A a1;
    	a1.putdata();
    	a1.getdata();
    	
    	return 0;
	}
