#include<bits/stdc++.h>
using namespace std;

class triangle
{
	int length, lb,bh,bl;
	public:
		void getdata()
		{
			cout<<"Coding to Find the Area of Triangle"<<endl;
			cin>>lb>>bh>>bl;
		}
		
		void solve()
		{
			length = (lb+bh+bl);
			cout<<"The Area of Triangle is = "<< length<<endl;
		 } 
};

    int main()
    {
    	triangle t1;
    	t1.getdata();
    	t1.solve();
    	
    	return 0;
	}
