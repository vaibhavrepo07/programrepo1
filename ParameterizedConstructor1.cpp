#include<bits/stdc++.h>
using namespace std;

class volume 
{
	int length, breadth, height;
	public:
		volume(int l, int b, int h)
		{
			length = l;
			breadth =b;
			height = h;
			cout<<"The Length of the Volume is ="<<l<<endl;
			cout<<"The Breadth of the Volume is="<<b<<endl;
			cout<<"The Height of the Volume is ="<<h<<endl;
		}
		
		void display()
		{
			cout<<"Volume of Rectangle is ="<<(length * breadth * height);
		}
};
    int main()
    {
    	volume a(5,20,10);
    	a.display();
    	
    	return 0;
	}
