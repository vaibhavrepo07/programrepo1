#include<bits/stdc++.h>
using namespace std;

class volume
{
	int length, breadth, height;
	public:
		volume(int l, int b, int h)
		{
			l=length;
			b=breadth;
			h=height;
		}
		void display()
		{
			cout<<"Volume of the Rectangle is ="<<length*breadth*height<<endl;
		}
};
    int main()
    {
    	volume a(10,30,40);
    	a.display();
    	
    	return 0;
	}
