#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{

	int temp;
	temp=a;
	a=b;
	b=temp;
}

  int main()
  {
  	int x,y;
    cout<<"The value of  x"<<x<<endl;
    cin>>x;
    cout<<"The value of y"<<y<<endl;
    cin>>y;
    swap(x,y);
    cout<<x<<endl;
    cout<< y<<endl;
    
    return 0;
  }
