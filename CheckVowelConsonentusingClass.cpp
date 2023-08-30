#include<bits/stdc++.h>
using namespace std;

class VowelConsonent
{
	char ch;
	public:
		void getdata(void)
		{
			cout<<endl;
			cout<<"It verify the Letter is either Vowel or Consonent"<<endl;
			cout<<endl;
			cout<<"Enter the Letter :-    "<<endl;
			cin>>ch;
		}
		void check(void)
		{
			if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'||ch=='I'
			 ||ch=='O'|| ch=='U')
			{
				cout<<"Yes ,It's a Vowel."<<endl;
			}
			else{
				cout<<"Yes, It's a Consonant."<<endl;
			}
		}
};

    int main()
    {
    	VowelConsonent vc1;
    	vc1.getdata();
    	vc1.check();
    	
    	return 0;
	}
