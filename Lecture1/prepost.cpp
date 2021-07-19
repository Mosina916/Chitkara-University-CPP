#include<iostream> //header file 
using namespace std;
int main(){ //starting point

	// int a=10;
	// cout<<" value of a "<<a<<endl; //10
	// int b=a++;

	// cout<<" value of a "<<a<<endl; //11
	// cout<<" value of b "<<b<<endl; // 10

	// int a=0,b=10;
	// if(a>0&&a++){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;

	// }

	// cout<<" value of a "<<a<<endl; //0
	// cout<<" value of b "<<b<<endl; //  11


	// int a=0,b=10; //a--1
	// if(false++&&a>0){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;

	// }

	// cout<<" value of a "<<a<<endl; //1
	// cout<<" value of b "<<b<<endl; //  11

	// int a=0,b=10;
	// if(b>0||a++){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;
	// }
	// cout<<" value of a "<<a<<endl; // 1
	// cout<<" value of b "<<b<<endl; // 10


	// int a=0,b=10; //a--2
	// if(a++||b>0){
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1;
	// }
	// cout<<" value of a "<<a<<endl; // 2
	// cout<<" value of b "<<b<<endl; // 10


	int a=0,b=10; //a--2
	if(++a&&a>0){
		a=a+1;
	}
	else{
		b=b+1;
	}
	cout<<" value of a "<<a<<endl; // 2
	cout<<" value of b "<<b<<endl; // 10



	return 0; //sucessful execution/termination
}



