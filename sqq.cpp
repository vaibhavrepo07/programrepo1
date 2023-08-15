#include<bits/stdc++.h>
using namespace std;

bool isEven(int a)
{
	 if(a&1){
	 	
		 	return 0;
	
	 } else
	  {
	  	 return 1;
	  }
	  
} 
    int main()
    {
    	 int num ;
    	 
    	 cin>>num;
    	 
    	 if(isEven(num)){
    	 	
    	 	cout<<"The Number is Even "<<endl;
		 }
		 else
		 {
		 	 cout<<"The Number is Odd"<<endl;
		 }
		 
		 return 0;
	}
