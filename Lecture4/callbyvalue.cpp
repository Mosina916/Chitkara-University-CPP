#include<iostream> //header file 
using namespace std;
void update(int x){ //naya bucket bann jata hai
	x=x+10;
	cout<<"value of x inside update function is "<<x<<endl; //100
	

}

int main(){ //starting point

	int x=90;


	cout<<"value of x is "<<x<<endl;//90
	update(x);



	cout<<"value of x inside main function is "<<x<<endl; //90


	// int x=90;
	// if(x==90){
	//  // x=50;reassign
	// 	int x=50;
	// 	cout<<x<<endl;
	// }




	

	return 0; //sucessful execution/termination
}



