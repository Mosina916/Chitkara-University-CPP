#include<iostream> //header file 
using namespace std;
void update(int &x){ //naya bucket nahi banta  hai
	x=x+10;
	cout<<"value of y inside update function is "<<y<<endl; //90



}

int main(){ //starting point


	// refrence variable-->nickname to the buckets


	// syntax

	// int x=10;
	// int &y=x;
	// int &z=y; //you can create refrence of refrence


	// cout<<x<<" "<<y<<" "<<z<<endl;
	// y=y+60;
	// cout<<x<<" "<<y<<" "<<z<<endl;



	int x=80;
	cout<<"value of x is : "<<x<<endl;//80
	update(x);

	cout<<"value of x after update function in main is : "<<x<<endl; //90















	

	return 0; //sucessful execution/termination
}



