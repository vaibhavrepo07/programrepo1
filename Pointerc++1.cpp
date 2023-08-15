#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10] = {23, 122, 41, 67};
	
	cout<<"Address of first Memory block is ="<< arr<<endl;
	cout<<arr[0]<<endl;
	
	cout<<"9th"<<"  "<< *(arr+2) <<endl;
	
	int i = 3;
	cout<<i[arr]<<endl;
	
	
	
	return 0;
}
