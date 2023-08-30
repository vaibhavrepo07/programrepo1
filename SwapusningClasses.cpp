#include<bits/stdc++.h>
using namespace std;

class swap
{
	int a,b,temp;
	public:
		void getdata(void)
		{
			cout<<"Coding with Swapping the Integers"<<endl;
			cin>>a>>b;
		}
		void mingle(void)
		{
			temp=a;
			b=a;
			a=temp;
			cout<<a << "   "<<b<< "  "<< temp<<endl;
		}
	
        int main()
        {
        	swap s1;
        	s1.getdata();
            s1.mingle();
                	
        	return 0;
		}
