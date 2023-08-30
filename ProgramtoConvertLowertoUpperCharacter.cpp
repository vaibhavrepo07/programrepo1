#include<bits/stdc++.h>
using namespace std;

class A
{
	char ch;
	public:
		void input()
		{
			cout<<"Coding with Character"<<endl;
			cout<<"Enter the Character"<<endl;
			cin>>ch;
		}
		void show()
		{
			if(ch>='a' && ch<='z')
			{
			ch=ch-32;
			cout<<ch<<endl;
		}
		else{
			ch=ch+32;
			cout<<ch<<endl;
		}
	}
};

int main()
{
	A a1;
	a1.input();
	a1.show();
	
	return 0;
}
