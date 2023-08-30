#include<bits/stdc++.h>
using namespace std;

class Natural
{
	int a;
	public:
		void getdata(void)
		{
			cout<<"Enter the Number"<<endl;
			cin>>a;
		}
		
		void putdata(void)
		{
			for(int i=0; i<=a; i++)
			{
				cout<< i <<endl;
			}
		}
};

    int main()
    {
    	Natural n1;
    	n1.getdata();
    	n1.putdata();
    	
    	return 0;
	}
