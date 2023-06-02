#include<bits/stdc++.h>
using namespace std;
int main()
{
	int choice ;
	float temp, cnvtemp;
	
	cout<<"Temp Conversation menu"<<endl;
	cout<<"1.Fahrenheit to Celcius"<<endl;
	cout<<"2.Celcius to Fahrenheit"<<endl;
	cout<<"Enter your choice"<<endl;
	
	if(choice == 1)
	{
		cout<<"Enter temp .in fahrenheit"<<endl;
		cin>>temp;
		cnvtemp = (temp-32)/1.8;
		cout<<"The temp in celcius is ="<<cnvtemp;
	}else
	{
		cout<<"Enter temp in Celcius"<<endl;
		cin>>temp;
		cnvtemp=(1.8*temp)+32;
		cout<<"The temp in Fahrenheit is ="<<cnvtemp<<endl;
	}
	return 0;
}
