#include<bits/stdc++.h>
using namespace std;

int main()
{
	///Pointer to int is Created , and pointing to some garbabe address .
	
	//int *p = 0;
	
	//cout<< *p  <<endl;
	
	int  num = 5; 
	int a = num ;
	cout<<"Before "<<num<<endl;
	a++;
	cout<<"After "<<num<<endl;
	cout<<num<<endl;
	cout<<endl;
	cout<<endl;
	
	int *p = &num;
	cout<<"Before "<<num<<endl;
	(*p)++;
	cout<<"After "<<num<<endl;
	cout<<endl;
	cout<<endl;
	
	
	//copying  a pointer 
	int *q=p;
	cout<<"The Address of p is = "<<p<<" = "<<"The Address of q is ="<<q<<endl;
	cout<<"The Value of Address of p is ="<<*p<<" = "<<"The Value of Address of q is ="<<*q<<endl;
	
	
	//Increment The Value at Address .
    int *p = &num;
	cout<<"Before "<<num<<endl;
	(*p)++ ;
	cout<<"After "<<num<<endl;
	
	
	//Important Concept.
	int i=3;
	int *t = &i;
	cout<<(*t)++ <<endl;
	
	*t = *t + 1;
	cout<<"Increase the value of t is ="<< *t<<endl;
    
	return 0;
}
