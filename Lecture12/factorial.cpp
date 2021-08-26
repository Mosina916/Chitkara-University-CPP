#include<iostream>
using namespace std;


int fact(int n){//0
	// base case-->stopping condition 
	if(n==0){
		return 1;

	}



	// recursive case
	// with the above calculate ans


	// storing values

	// int chotaans=fact(n-1); //pure assume  //24

	// int badaans=n*chotaans;//5*24=120

	// return badaans;


	return n*fact(n-1); //5*24--120 //0


	
}
int main(){


	int n;
	cin>>n; //5

	cout<<"factorial of n is "<<fact(n)<<endl;



	return 0;
}