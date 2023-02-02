#include<bits/stdc++.h>
using namespace std;

//hold;

void printArray()
{
	
}

int main()
{
	//declare
	int number[15];
	
	//accessing an array
	cout<<"Value at 14 Index "<<number[14]<<endl;
//	cout<<"Value at 20 Index "<<number[20]<< endl;

  //Initilization of an Array
  int second[3]={4,3,5};
  
  //accessing an Element
  cout<<second[2]<<endl;
  
  int third[15]={2,7};
  int n=3;
  
  //print the array 
  for (int i=0;i<=n;i++)
  {
  	cout<<third[i]<<"   ";
  }
  	
	cout<<"Everything is Great"<<endl<<endl;
	
	//Initilization all the indices with zero
	int fourth[10]={1};
	
	cout<<"Printing the array"<<endl;
	
	for(int i=1;i<=n;i++)
	{
		cout<<fourth[i]<<endl<<"  ";
	}
	return 0;
}
