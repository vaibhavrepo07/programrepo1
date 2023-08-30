#include<bits/stdc++.h>
using namespace std;

class cube
{
	int r;
	public:
		void getdata(void)
		{
			cout<<"Coding with Cube "<<endl;
			cout<<"Enter any number to get Cube"<<endl;
			cin>>r;
		}
		
		void putdata(void)
		{
			r=r*r*r;
			cout<<"The Cube of this Number is = "<< r<<endl;
		}
};

    int main()
    {
    	cube c1;
    	c1.getdata();
    	c1.putdata();
    	
    	return 0;
	}
