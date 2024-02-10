#include<bits/stdc++.h>
using namespace std;

class A
{
	public :
		void display()
		{
			cout<<"The Value of Programmer is always High"<<endl;
		}
};

class B :public A
{
	public:
		void display()
		{
			cout<<"Love the Code"<<endl;
		}
};

int main()
{
	B aa;
	aa.display();
	aa.A::display();
	
	return 0;
}
