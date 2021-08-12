#include<iostream>
using namespace std;

int main(){


	string s;
	cin>>s; //"9456495"

	int i=0; //"9443404"
	if(s[i]=='9'){
		i++;

	}
	// i-->4

	for(;s[i]!='\0';i++){
		int digit =s[i]-'0';//'9'-'0'  9-->digit
		if(digit>=5){
			digit=9-digit;//9-9-->0


		}

		s[i]=digit+'0'; //0+48=48

	}
	cout<<s<<endl;




	

	





	return 0;
}