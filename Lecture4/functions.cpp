#include<iostream>
using namespace std;
// syntax

	// returntype  functionname(aruguments){
	// task

	// }


// 

// return nothing and no argument
void printstatement(){ //function decleartion
	cout<<"hello "<<endl; //function definition
	cout<<"hii "<<endl;
	cout<<"hello world "<<endl;
	cout<<"hii world "<<endl;


	}

 // returning noting  but have arguments
// void sumoftwono(int t,int u){
// 		int sum=t+u;
// 		cout<<"sum is "<<sum<<endl;
// 	}


int multiply(); //forward decleartion

int sumoftwono(int t,int u);
	
int main(){

	// functionname();

	// printstatement(); //function caling/invoking
	// printstatement();
	// printstatement();
	// printstatement();
	// printstatement();

	// for(int i=1;i<=5;i++){
	// 	printstatement();

	// }


	int x,y;
	cin>>x>>y; //10  40

	int c=sumoftwono(x,y);
	cout<<"sum is "<<c<<endl;


	cout<<"multiply is "<<multiply()<<endl;









	// cout<<"hello "<<endl;
	// cout<<"hii "<<endl;
	// cout<<"hello world "<<endl;
	// cout<<"hii world "<<endl;


	// cout<<"hello "<<endl;
	// cout<<"hii "<<endl;
	// cout<<"hello world "<<endl;
	// cout<<"hii world "<<endl;

	// cout<<"hello "<<endl;
	// cout<<"hii "<<endl;
	// cout<<"hello world "<<endl;
	// cout<<"hii world "<<endl;

	// cout<<"hello "<<endl;
	// cout<<"hii "<<endl;
	// cout<<"hello world "<<endl;
	// cout<<"hii world "<<endl;

	// cout<<"hello "<<endl;
	// cout<<"hii "<<endl;
	// cout<<"hello world "<<endl;
	// cout<<"hii world "<<endl;



	return 0;
}

// return someting no arguments
int multiply(){
	int q,w;
	cin>>q>>w; //3 5
	return q*w;


}

// returning someting with arguments
int sumoftwono(int t,int u){
		int sum=t+u;
		// cout<<"sum is "<<sum<<endl;
		return sum;
	}

