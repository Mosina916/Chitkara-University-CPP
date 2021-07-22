#include<iostream>
using namespace std;

int main(){

	// count of chars till $


	// char ch;
	// int co=0;
	// cin>>ch; //'h'
	// while(ch!='$'){
	// 	co++; //8
	// 	cin>>ch; 

	// }

	// cout<<"count of chars "<<co<<endl;

	// cin.get(); --doesn't ignore whitespaces -->return char//takes only 1 char
	char ch;
	int co=0;
	// cin>>ch; //'h'

	ch=cin.get();
	while(ch!='$'){
		co++; //8
		ch=cin.get();

	}

	cout<<"count of chars "<<co<<endl;
	
	return 0;
}