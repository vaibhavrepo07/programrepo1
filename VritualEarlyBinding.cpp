#include<bits/stdc++.h>
using namespace std;

class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter the code"<<endl;
			cin>>a>>b;
		}

        void output()
   {
          	   cout<<"The value of A is ="<<a<<endl;
	           cout<<"The value fo B is ="<<b<<endl;
            }
};
  
   class B: public A
   {
   	   public:
   	   	void show()
   	   	{
   	   		cout<<"The Love is Fake"<<endl;
			  }
   };
   
   
   
   int main()
   {
   	   B s;
   	   s.input();
   	   s.output();
   	   s.show();
   	   
   	   return 0;
   }
