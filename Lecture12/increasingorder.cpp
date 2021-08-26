#include<iostream>
using namespace std;


void printinc(int n){ //3  o/p--> 1 2 3 4 5
		if(n==0){
		return;
	} 



	// recursive case
	printinc(n-1); //0
	

	cout<<n<<" "; //1 2 
	


}




int main(){


	int n;
	cin>>n; //1 to 5

	printinc(n); //1 2 3 4 5

	cout<<endl;





	return 0;
}