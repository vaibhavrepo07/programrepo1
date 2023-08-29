#include<bits/stdc++.h>
using namespace std;

class ASCII
{
	char ch;
	public:
		void input(void)
		{
			cout<<"Enter any Character"<<endl;
			cin>>ch;
		}
		
		void output(void)
		{
			cout<<"The output is = "<< ch << "is"<< (int)ch<<endl;
		}
};


 int main()
 {
 	  ASCII a1;
 	  a1.input();
 	  a1.output();
 	  
 	  return 0;
 }
