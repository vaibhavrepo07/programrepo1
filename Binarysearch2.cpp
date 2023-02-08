#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
	
	int s=0, e=n-1;
	int ans, mid= s+(e-s)/2;
	
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else if(key<arr[mid]){
			e=mid-1;
		}
		mid= s+(e-s)/2;
	}
	return -1;
}
int main()
{
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,8,11,14,16};
	
	cout<<"First Occurrence of 3 is"<<firstOcc(even , 5 , 3)<<endl;
	
	
	return 0;
}
