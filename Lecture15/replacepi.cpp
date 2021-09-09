#include<iostream>
using namespace std;
string replacepi(string s){//"p"

// base case 
if(s.size()<=1){
	return s;

}

// recursive case
if(s.substr(0,2)=="pi"){
	return "3.14"+replacepi(s.substr(2));

}

return s[0]+replacepi(s.substr(1));




}
int main(){
	string s;
	cin>>s;
	cout<<replacepi(s)<<endl;
	

	return 0;
}