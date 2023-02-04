#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n)
{
   int max = INT_MIN;
   
   for(int i=0;i<=n;i++)
   {
   	 if(num[i]>max)
   	 {
   	 	max=num[i];
		}
   }
   
   //returning max value
   return max;
}


int main()
{
	int size ;
	cin>>size;
	
	int num=[100];
	
	//taking input in array
	for(int i=0;i<size; i++)
	{
		cin>>num[i];
	}
	cout<<"Maximum Value is ="<<getMax (num,size) << endl;
	cout<<"Minimum Value is ="<<getMin (num,size) << endl;
}
