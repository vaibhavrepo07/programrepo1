#include<bits/stdc++.h>
using namespace std;

class if1
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter the Number"<<endl;
			cin>>a;
			if(a>0)
			{
				cout<<"The Number is Positive"<<endl;
			}
			
		}
		
		void zero()
		{
			cout<<"Enter the Number"<<endl;
			cin>>b;
			if(a=0)
			{
				cout<<"The Number is Zero"<<b<<endl;
			}
		}
		
		void Negative()
		{
			cout<<"Enter the Number"<<endl;
			cin>>c;
			if(c<0)
			{
				cout<<"The Number is Negative"<<c<<endl;
			}
		}
};

    int main()
    {
    	if1 a1;
    	a1.getdata();
    	a1.Negative();
    	a1.zero();
    	
    	return 0;
	}
