#include<bits/stdc++.h>
using namespace std;

class A
{
	int a=2,i,t;
	public:
		void getdata()
		{
			cout<<"Print the Table"<<endl;
			for(i=0;i<=10;i++)
			{
				t = a*i;
				cout<<t<<endl;
			}
	cout<<"The table of Two "<<endl;
		}
};

    int main()
    {
    	A a1;
    	a1.getdata();
    	
    	return 0;
	}
