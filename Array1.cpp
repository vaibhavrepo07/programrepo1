#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
	cout<<"Passing the Array "<<endl;
	//Print the Array
	for (int i=0;i<size ;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"Printing is Done "<<endl;
}

int main()
{
	int number[15];
	
	//accessing an array
	cout<<"Value at 14 Index "<<number[14]<<endl;
	printArray(number, 15);
	
	//initilization of an Array
	int second[3]={5,7,11};
	
	//accessing the element 
	cout<<"Value at 2 Index "<<second[2]<<endl;
	
	int third [15]={2,7};
	
	int n=15;
	printArray(third,15);
	 //Fourth Array 
	
	int fourth[10]={0};
	n=10;
	printArray(fourth,10);
	
	 //Fifth Array
	 //Initilizing all locations with 1 (not possible with below line)
	int fifth [10]={1};
	int p=10;
    
    printArray(fifth,10);
    
    
	cout<<endl<<"Everything is Fine"<<endl;
	
	
	return 0;
}

