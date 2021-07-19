#include<iostream> //header file 
using namespace std;
int main(){ //starting point
	int p,r,t; //1   1 10 //p r t they will always be int values
	cin>>p>>r>>t;

	// i need p,r,t to calculate si

	// float si=(p*r*t)/100.0;
	// float si=(p*r*t*1.0)/100;
	float si=(p*r*t*1.0)/100.0; //typecasting -->explicit


	cout<<"simple intrest is "<<si<<endl;



	return 0; //sucessful execution/termination
}



