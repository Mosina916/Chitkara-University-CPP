#include<iostream> //header file 
using namespace std;


bool isprime(int n){
	// task;

	int i=2; //initilization condition
	while(i<=n-1){
		if(n%i==0){
			// cout<<"not prime"<<endl;
			return false;
			// return 0;
			// break;
		}
		i=i+1;

	}

	// if(i==n){
		// cout<<"Prime "<<endl;

		return true;

	// }
}
int main(){ //starting point
	int n;
	cin>>n; //5 -->2 to 4

	// isprime(n);
	if(isprime(n)){
		cout<<"Prime "<<endl;


	}
	else{
		cout<<" not Prime "<<endl;
	}
	

	


	// task 2

	// t3

	return 0; //sucessful execution/termination
}



