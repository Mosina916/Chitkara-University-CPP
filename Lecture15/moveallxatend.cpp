#include<iostream>
using namespace std;
string moveallxatend(string s){//"abxcx"-->"bxcx"-->"xcx"-->"cx"-->"x"
	// base case
if(s.length()==0){
	
	return "";
}

	// /recursive case
	string st=s.substr(0,1);//"a", "b","x","c","x"
	string choteans=moveallxatend(s.substr(1));//"bxcx"-->bcxx

	if(st=="x"){
		return choteans+st;
	}
	else{
		return st+choteans;
	}



}
int main(){
	string s;
	cin>>s;
	cout<<moveallxatend(s)<<endl;
	

	return 0;
}