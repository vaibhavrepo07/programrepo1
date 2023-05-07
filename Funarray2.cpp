#include<bits/stdc++.h>
using namespace std;

int main()
{
	int number[15];
	
	//accessing an Array
	cout<<"Value at 14 Index"<<number[14]<<endl;
	cout<<"Value at 20 Index "<<number[20]<<endl;
	
	
	
	//Intialising an Array
	int second[3] = {5,3,1};
	
	//accessing an Array
	cout<<"Value at 2 Index"<<second[2]<<endl;
	
	int third[15]={2,7};
	
	int n=3;
	cout<<"Printing the Array"<<endl;
	//print the Array
	for(int i=0; i<n; i++)
	{
		cout<<third[i]<<"   ";
	}
	
	//Initilization all the Elements with Zeros
	int fourth[10]= {0};
	int p=10;
	cout<<"Printing the Array"<<endl;
	//print the Array
	for(int i=0;i<p;i++)
	{
		cout<<fourth[i]<<endl;
	}
	
	
	//Initilization all the Elements with one
	int fifth[4]={1};
	int n=4;
	cout<<"Printing with One"<<endl;
	//Print the Array
	for(int i=0; i<n; i++)
	{
		cout<<fifth[i]<<"   "<<endl;
	}
	
	cout<<"Everything is Fine "<< endl;
	return 0;
}

