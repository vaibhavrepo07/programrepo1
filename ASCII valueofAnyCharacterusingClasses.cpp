#include<bits/stdc++.h>
using namespace std;

class A 
{
	char ch;
	public:
		void input()
		{
			cout<<"Enter any Character"<<endl;
			cin>>ch;
		}
		void output()
		{
			cout<<"ASCII Value of "<<ch<<" is "<<(int)ch<<endl;
		}
};

int main(){
	
	A a1;
	a1.input();
	a1.output();
	
	return 0;
}
