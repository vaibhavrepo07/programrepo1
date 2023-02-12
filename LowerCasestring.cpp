#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
	if(ch>='a'&& ch<='z')
	return ch;
	else{
		char temp = ch-'A'+'a';
		return temp;
	}
}

 int main()
 {
 	 char name[20];
 	 cout<<"  "<<endl;
 	 cin>>name;
 	 
 	 cout<<"CHARACTER  is ="<<toLowerCase('b')<<endl;
 	 cout<<"CHARACTER is = "<<toLowerCase('C')<<endl;
 	 
 	 return 0;
 }
