#include<bits/stdc++.h>
using namespace std;

class A
{
	public:
	void display()
	{
		cout<<"Enter the Boys Name"<<endl;
	}
};

class B : public A
{
	public:
	void display()
	{
		cout<<"Enter The Boys RollNumber"<<endl;
	}
};

    int main()
    {
    	B aa;
    	aa.display();
    	aa.A::display();
    	
    	return 0;
	}


