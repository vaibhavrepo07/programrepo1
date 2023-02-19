#include<bits/stdc++.h>
using namespace std;
class member
{
	public:
		void inside()
		{
			cout<<"This is Inside Member Function";
		}
		void outside();
};
 
   void member::outside()
   {
   	  cout<<"Outside the value";
   }
   
   int main()
   {
   	member t1;
   	t1.inside();
   	t1.outside();
   	
   	return 0;
   	
   }
