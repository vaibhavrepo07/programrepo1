#include<bits/stdc++.h>
using namespace std;

class MaxandMin
{
	int a,b;
	public:
		void getdata(void)
		{
			cout<<"Enter the Numbers"<<endl;
			cin>>a>>b;
		}
		
		void check(void)
		{
			if(a>b)
			{
				cout<<"A is Greater than B"<<endl;
			}
			else{
				cout<<"B is Greater than A"<<endl;
			}
		}
		
		void show(void)
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
};

    int main()
    {
    	MaxandMin mm1;
    
    	mm1.getdata();
    	mm1.check();
    	mm1.show();
    	
    	return 0;
	}
