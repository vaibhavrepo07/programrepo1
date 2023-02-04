#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=100;
	int &ref=a;
	
	cout<<"The value of a "<<a<<endl;
	cout<<"The value of ref"<<ref<<endl;
	cout<<"The address of a"<<&a<<endl;
	cout<<"The ref address "<<&ref<<endl;
	
	return 0;
}
