#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the value of A "<<endl;
	cin>>a;
	
	int b;
	cout<<"Enter the value of B "<<endl;
	cin>>b;
	
	char op;
	cout<<"Enter the Operation "<<endl;
	cin>>op;
	
	switch(op)
	{
		 case '+': cout<<"Summation of two numbers are  ="<<a+b;
		 break;
		 
		 case '-': cout<<"Difference of two Numbers are ="<<a-b;
		 break;
		 
		 case '*': {cout<<"Product of two Number are = "<<a*b; }
		 break;
		 
		 case '/': cout<<"Division of two numbers are ="<<a/b;
		 break;
		 
		 default : cout<<"Calculator is not responding "<<endl; 
	}
	
	return 0;
	
	
}
