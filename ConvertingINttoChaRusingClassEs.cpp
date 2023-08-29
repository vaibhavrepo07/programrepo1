#include<bits/stdc++.h>
using namespace std;

class A 
{
	char ch;
	public:
		
		void input(void)
		{
			cout<<"Enter the Character"<<endl;
			cin>>ch;
		}
		
		void output(void)
		{
			cout<<"The Character are = "<<ch<<" is "<<(int)ch<<endl;
		}
};

     int main(){
     	
     	A a1;
     	a1.input();
     	a1.output();
     	
     	return 0;
	 }
