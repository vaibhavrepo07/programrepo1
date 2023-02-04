#include<bits/stdc++.h>
using namespace std;

//void add(int , int );  //Function declaration


void add(int x, int y)  //Function definition , formal argument .
                        //Actual arguments values copies to formal arguments.
{
//	int c;
//	c=x+y;
	cout<<"Summation of A and B is ="<<x+y;	
}


int main()
{
	int a, b ,c;
	cin>>a>>b>>c;
	add(a,b);    //Actual Arguments
    
	return 0;	
 }
