#include<iostream>
using namespace std;

int multiply(int a,int b){ //0 0
// base case
	if(b==0){
		return 0;
	}

	// recursive case
			// 0+0+0+0-->0
	return a+multiply(a,b-1);// 3*4-->3+3+3+3+3+0-->15
}


int main(){


	int a,b;
	cin>>a>>b;
	cout<<multiply(a,b)<<endl;

	



	return 0;
}