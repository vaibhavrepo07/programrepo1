#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n , diff ;
	 cin>>n;
	 cout<<"Enter the Difference ";
	 while (n>0)
	 {
	 	 diff = diff-n %10;
	 	 n= n/10;
	 }
	 cout<<"The number is = "<<diff <<endl;
	 
	 return 0;
}
