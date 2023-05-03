#include<bits/stdc++.h>
using namespace std;
           //In switch statemets, continue is ignored by compiler ,and
		   // provide error to programmer. 
int main()
{
	int num1;
	
	switch(num1)
	{
		case 1: cout<<"Computer "<<endl;
		break;
		
		case 2: cout<<"Laptop"<<endl;
	     continue;
		
		case 3: cout<<"Television"<<endl;
		break;
		
		case 4: cout<<"Disc Jockey"<<endl;
		break;
		
		case 5: cout<<" Air Conditioner"<<endl;
		break;
		
	}
	
	return 0;
}
