#include<iostream>
using namespace std;
int main(){

	char ch;
	cin>>ch; //'D'




	// if(ch=='A'){
	// 	cout<<"character is "<<ch<<endl;
	// }
	// else if(ch=='B'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='C'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='D'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<ch<<endl;

	// }


	switch(ch){
		case 'A':
		case 'a':cout<<"apple "<<endl;
				break;

		case 'B':
		case 'b':cout<<"Bat"<<endl;
				break;

		case 'C':cout<<"character is "<<ch<<endl;
				break;
		case 'D':cout<<"character is "<<ch<<endl;
				break;

		default:cout<<"invalid character "<<ch<<endl;


	}




	return 0;
}