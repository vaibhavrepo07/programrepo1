#include<bits/stdc++.h>
using namespace std;

class evenOdd 
{
	int a;
	public:
		void getdata(void)
		{
			cout<<"Code with Even and Odd Number"<<endl;
			cin>>a;
		}
		void check(void)
		{
			if(a%2==0)
			{
				cout<<"This is a Even Number:"<<endl;
			}
			else{
				cout<<"This is a Odd Number:"<<endl;
			}
		}
};

    int main()
    {
    	evenOdd e1;
        e1.getdata();
    	e1.check();
        
    	return 0;
	}
