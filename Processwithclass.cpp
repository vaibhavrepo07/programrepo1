#include<bits/stdc++.h>
using namespace std;

class A
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter two Numbers"<<endl;
			cin>>a>>b;
		}
		void process()
		{
			cout<<"Process of Numbers are"<<endl;
			c=a&b;
		}
		
		void output()
		{
			cout<<"The process is = "<< c <<endl;
		}
};

    int main()
    {
    	A a1;
    	a1.input();
        a1.process();
		a1.output();
    
    	
    	return 0;
	}

