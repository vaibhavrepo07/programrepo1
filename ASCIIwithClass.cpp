#include<bits/stdc++.h>
using namespace std;

class A
{
	int i;
	public:
		void show()
		{
			for(i=0; i<=255 ;i++)
			{
				cout<<"The ASCII Code is = "<<(char)i<<i<<endl;
			}
		}
};

  int main()
  {
  	 A a1;
  	 a1.show();
  	 
  	 return 0;
  }
