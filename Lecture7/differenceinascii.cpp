#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int l=s.length(); //3

	for(int i=0; i<=l-2;i++){
		int k=s[i+1]-s[i];
	cout<<s[i]<<k;


	}
	cout<<s[l-1]<<endl;
	

	return 0;
}
