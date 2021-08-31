#include<iostream>
using namespace std;
int powerxn(int x,int n){//x^n //3^0-->1

	// base case
	if(n==0){
		return 1;

	}


	// recursive case
		// calculation of ans 
	// int cans=powerxn(x,n-1); //3^3-->27
	// int badans=x*cans;//3*27

	// return badans;


	return x*powerxn(x,n-1); //3*3*3*3*3^0




}
int main(){
	int n,x;
	cin>>x>>n; //3 4
	cout<<powerxn(x,n)<<endl;



	return 0;
}