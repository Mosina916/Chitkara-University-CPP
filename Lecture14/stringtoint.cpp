#include<iostream>
using namespace std;

int stringtoint(string s,int l){ //"4"
	// base case
if(l==0){
	return 0;
}

	//recursive case
	int digit=s[l-1]-'0';//6  3 4
	return stringtoint(s,l-1)*10+digit; //43*10+6-->436

}

int main(){
	string s; //"436"-->436
	cin>>s;
	int l=s.length(); //3


	// cout<<s+10<<endl; //error
	int x=stringtoint(s,l);//436


	cout<<"value of x is "<<x<<endl;


	cout<<"value of x+100 is "<<x+100<<endl;



	return 0;
}