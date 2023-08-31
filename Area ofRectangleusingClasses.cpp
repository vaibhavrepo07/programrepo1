#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
	int l,b,h,r;
	public:
         void getdata(void)
         {
            cout<<"Coding to Calculate the Area of Rectangle"<<endl;
			cin>>l>>b>>h;	
		 }
		 
		 void calculate(void)
		 {
		 	r=l*b*h;
		 	cout<<"The Area of Rectangle is = "<<r<<endl;
		 }
		
};

    int main()
    {
    	Rectangle r1;
    	r1.getdata();
    	r1.calculate();
    	
    	return 0;
	}

 
