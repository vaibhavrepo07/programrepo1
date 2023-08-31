#include<bits/stdc++.h>
using namespace std;

class Area
{
	int pi,r,area;
	public:
		void getdata(void)
		{
			cout<<"Coding with Calculate the Area of Circle"<<endl;
			cin>>r;
		}
		
		void calculate(void)
		{
		    int pi=3.14;
			area=pi*r*r;
		}
		
		void output(void)
		{
			cout<<"The Area of Circle is = "<< area<<endl;
			cout<<endl;
		}
};

    int main()
    {
    	Area a1;
    	a1.getdata();
    	a1.calculate();
    	a1.output();
    	
    	return 0;
	}

  
