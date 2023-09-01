#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cout<<"Coding with Switch Statment"<<endl;
	cin>>a;
	
	cout<<" Play "<<endl;
	cout<<" Load "<<endl;
	cout<<" Save "<<endl;
	cout<<" Exit "<<endl;
	
	switch(a)
	{
		case 1:cout<<"Play"<<endl;
		break;
		
		case 2:cout<<"Load"<<endl;
		break;
		
		case 3:cout<<"Save"<<endl;
		break;
		
		case 4:cout<<"Exit"<<endl;
		break;
		
		default:
			cout<<"The Case is not Working "<<endl;
			
	}
	
	return 0;
}
