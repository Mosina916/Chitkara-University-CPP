#include<iostream>
using namespace std;
#define pi 3.14 

// #define pi 3.14+1  //takes no space in memory

// #define pi (3.14+1)

// #define f(n) 

int main(){
	// syntax


	// pi=pi+1;
	// cout<<pi<<endl;

	// step 1; initilization
	// while(condition){  //step 2
	// 	task;
	// 	updation //step 3
	// }


	// syntax

	// for(initilization;condition;updation){
	// 	// task;
	// }


	// int i=1; //initilization 
	// while(i<=10){ 
	// 	cout<<i<<" "; //task
	// 	i++; //updation

	// }

	// cout<<endl;


	// for(int i=1;i<=10;i++){
	// 	cout<<i<<" "; //task

	// }
	// cout<<endl;

	// modified for loop to while loop

	// int i=1;


	// for(;i<=10;){
	// 	cout<<i<<" "; //task
	// 	i++;

	// }
	// cout<<endl;


	int n;
	cin>>n; //634
	// co=0;
	// while(n!=0){
	// 	co++; //3
	// 	n=n/10;//0

	// }


	// cout<<co<<endl;


	


	int co=0;
	for(;n!=0;n=n/10){
		co++; //3

	}

	cout<<co<<endl;









	return 0;
}