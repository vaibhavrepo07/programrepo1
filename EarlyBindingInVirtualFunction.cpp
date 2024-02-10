#include<bits/stdc++.h>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"I Adore You... My love "<<endl;
		}
};

   class B: public A
   {
   	   public:
   	   	void base()
   	   	{
   	   		cout<<"Hello Sanskruti"<<endl;
			  }
   };
   
   
   int main()
   {
   	  B aa;
   	  aa. base();
   	  aa.show();
   	  
   	  return 0;
   }
