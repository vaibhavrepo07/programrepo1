#include<bits/stdc++.h>
using namespace std;

class div

{
	int a,b,t ;
	public:
		void getdata(void);
		void putdata(void);
};

   void div::getdata(void)
   {
   	  cout<<"Enter the Number for two Division in terms of Representing the number"<<endl;
   	  cin>>a>>b;
   }
   
   void div:: putdata(void)
   {
   	  t=a/b;
   	  cout<<"The Division of two Numebrs in terms of Division is according to the Work = "<<t<<endl;
  	  
}

   int main()
   {
   	div we;
   	we.getdata();
   	we.putdata();
   	
   	
   	return 0;
   }
