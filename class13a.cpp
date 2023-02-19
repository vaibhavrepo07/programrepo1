#include<bits/stdc++.h>
using namespace std;
class hero
{
	 private :
	 	float bob, kelvin;
	 	public:
	 		void getdata()
	 		{
	 			cout<<"First Character in Mininons";
	 			cin>>bob;
	 			cout<<"Second character in Minions";
	 			cin>>kelvin;
			 }
			 void putdata()
			 {
			 	if(bob>kelvin)
			 	{
			 		cout<<"Minion is Superhit Flick"<<endl;
			 		
				 }
				 else
				 {
				 	cout<<"Minion is Average Flick"<<endl;
				 }
			 }
};

int main()
 {
 	 hero minion1;
 	 minion1.getdata();
 	 minion1.putdata();
 	 
 	 return 0;
 }
