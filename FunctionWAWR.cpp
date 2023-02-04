#include<bits/stdc++.h>
using namespace std;

//int add (int , int );  //function declaration

int add(int x, int y)  // Function Definition 
{
      int z;
      z=x+y;
      
      return z;
}

int main()
{
	int a, b ;
	cin>>a>>b;
	
	int ans;
	ans=add(a,b);    //Actual Parameters values provide to Formal Parameters
	
	cout<<ans<<endl;
	
	return 0;
}
