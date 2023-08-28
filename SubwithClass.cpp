#include<bits/stdc++.h>
using namespace std;

class sub
{
	int a,b,t;
	public:
		getdata(void);
		putdata(void);
};

 sub :: getdata(void)
 {
 	cout<<"Enter two Numbers for subtraction"<<endl;
 	cin>>a>>b;
 	
 }
 sub :: putdata(void)
 {
 	t = a-b;
 	cout<<"The Difference of this two Numbers are = "<< t<<endl;
 }

int main()
{
	sub t1;
	t1.getdata();
	t1.putdata();
	
	return 0;
}
