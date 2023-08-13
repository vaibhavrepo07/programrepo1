#include<bits/stdc++.h>
using namespace std;

int sqr(int);

int main()
{
	  int no , ans;
	  cout<<"Enter a Number"<<endl;
	  
	  cin>> no;
	  ans = sqr(no);
	  cout<<"Square of "<<no<<"is"<<ans<<endl;
	  
	  return 0;
}

  int sqr(int x )
  {
  	 return (x*x);
  }
