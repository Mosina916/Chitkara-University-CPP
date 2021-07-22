#include<iostream>
using namespace std;
int main(){
	 //implicit type conversion 
	// ascii table
	char ch;
	cin>>ch; //g

	if(ch>='A'&&ch<='Z'){
		cout<<1<<endl;

	}
	else if(ch>='a'&&ch<='z'){
		cout<<0<<endl;

	}
	else{
		cout<<-1<<endl;
	}

	// 2nd way

	// if(ch>=65&&ch<=90){
	// 	cout<<"uppercase"<<endl;

	// }
	// else if(ch>=97&&ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"neither uppercase nor lower"<<endl;
	// }

	// /3rd way


	// inbuild functions
	if(isupper(ch)){
		cout<<"uppercase"<<endl;


	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"neither uppercase nor lower"<<endl;

	}












	return 0;
}