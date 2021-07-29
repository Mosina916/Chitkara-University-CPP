#include<iostream>
using namespace std;
int main(){

	int y=30;
	if(y>=30){
		if(y==40){
			cout<<"y is 40 "<<endl;

		}
		else{
				cout<<"y is greater or equal to 30"<<endl;

		}
	
	
	}
	else{
		cout<<"y is less or equal to 30"<<endl;

	}

	// teranary -->alternative to if else

	// condition?statement 1:statement 2;
	// y>=30?cout<<"y is greater or equal to 30"<<endl:cout<<"y is less or equal to 30"<<endl;

	y>=30?y==40?cout<<"y is 40 "<<endl:cout<<"y is greater or equal to 30"<<endl:cout<<"y is less or equal to 30"<<endl;




	return 0;
}