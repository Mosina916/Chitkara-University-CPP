#include<iostream>
using namespace std;


void printdec(int n){ //0
	// base case
	if(n==0){
		return;
	} 



	// recursive case

	cout<<n<<" "; //5 4 3 2 1
	printdec(n-1); //0



}




int main(){


	int n;
	cin>>n; //5 to 1

	printdec(n); //5 4 3 2 1

	cout<<endl;





	return 0;
}