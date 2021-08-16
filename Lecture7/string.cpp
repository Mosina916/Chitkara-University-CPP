#include<iostream>
#include<cstring>
using namespace std;

int main(){

	string s;  //string->class s->object
	// cin>>s; //ignores whitespaces
	// cout<<s;
	// getline
	// getline(cin,s);
	// cout<<s<<endl;

	// 2nd way

	// string s1="hello what is your name";
	// cout<<s1<<endl;


	// // 3rd way
	// string s2("coding blcoks");

	// cout<<s2<<endl;

	// // 4th way 

	// char arr[100]="qwerty shdfgjdgs";
	// cout<<arr<<endl;


	string s3="ABC" ;
	string s4="xyz";
	cout<<s3<<endl;
	cout<<s4<<endl;

	// concatenation

	// s3=s3+s4;
	// // s3=ABCxyz
	// //s4=xyz
	// cout<<s3<<endl;
	// cout<<s4<<endl;

// string comparision
	if(s3<s4){
		cout<<s3<<endl;
	}
	else{
		cout<<s4<<endl;
	}


	string s6="helloworld";
	cout<<s6.substr(2)<<endl;
	cout<<s6.substr(2,3)<<endl;

	cout<<s6.length()<<endl;
	s6.push_back('G');
	cout<<s6<<endl;

	s6.pop_back();

	s6.pop_back();
	cout<<s6<<endl;

















	return 0;
}