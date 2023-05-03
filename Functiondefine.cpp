#include<bits/stdc++.h>
using namespace std;

float max(float x, float y)
{
	if(x>y)
	return x;
	else
	return y;
}
  main()
  {
  	  float a,b; 
  	  cout<<"Enter any two Numbers"<<endl;
  	  cin>>a>>b;
  	  cout<<"Largest among given two Numbers is ="<<max(a,b)<<endl;
  	  
  	  return 0;
  }
