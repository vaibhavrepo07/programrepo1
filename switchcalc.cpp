#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	
	char op; 
	cin>>op;

	
	switch(op)
	{
		case '+':cout<<"  "<<a+b;
		break;
		
		case '-': cout<<"  "<<a-b;
		break;
		
		case '*':cout<<"  "<<a*b;
		break;
		
		case '/':cout<<"  "<<a/b;
		break;
		
		case '%':cout<<"  "<<a%b;
		break;
		default :
			cout<<"::::"<<endl;
			break;
	}
	return 0;
}
