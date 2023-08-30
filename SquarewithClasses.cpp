#include<bits/stdc++.h>
using namespace std;

class square
{
	int a;
	public:
		void enter(void)
		{
			cout<<"Coding with Finding any Numbers of Square"<<endl;
			cout<<"Enter the Numbers"<<endl;
			cin>>a;
		}
		
		void solve(void)
		{
			a=a*a;
			cout<<a<<endl;
		}
	
};

    int main()
    {
    	square sq;
    	sq.enter();
    	sq.solve();
    	
    	return 0;
	}
