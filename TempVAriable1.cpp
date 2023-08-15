#include<bits/stdc++.h>
using namespace std;

void swap(int & , int &);

int main(){
	
	int a, b ;
	cin>>a>>b;
	cout<<"The Value of  A "<<endl;
	cout<<"The Value of B "<<endl;
    cout<<"Before Swapping "<<endl;
    
    swap(a,b);
    
    cout<<"After Swapping "<<endl;
    cout<<"The Value of A "<<endl;
    cout<<"The Value of B "<<endl;

    return 0;
}
  
   void swap(int &x, int &y)
   {
   	    int temp;
   	    x=temp;
   	    y=x;
   	    x=temp;
   }
   
  
   
