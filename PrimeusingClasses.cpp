#include<bits/stdc++.h>
using namespace std;

class Prime
{
	int no;
	public:
		void getdata(void)
		{
			cout<<"Coding to Check it's Pirme or not "<<endl;
			cin>>no;
		}
		void check(void)
		{
			if(no%no==0)
			{
				cout<<"Its' a Prime Number"<<endl;
			}
			else{
				cout<<"Its' not a Prime Number"<<endl;
			}
		}
};

    int main()
    {
    	Prime p1;
    
    	p1.getdata();
    	p1.check();
    	
    	return 0;
    	
	}
