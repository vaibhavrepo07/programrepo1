#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[]/*Array Name*/, int size/*Array Size*/)
{
	cout<<"Printing the Array"<<endl;
	//print the Array
    for(int i=0 ;i<size; i++)
    {
    	cout<<arr[i]<<"  ";
	}
	
	cout<<"Printing is Done"<<endl;
}

int main()
{

  int third[15]={1,2};
  printArray(third, 15);
  
  //Initilization all location with 1 (not Possible with Below Line)
  
  int fifth[12]={3,2,4,6,7};
  printArray(fifth,12);

  
  return 0;
}
