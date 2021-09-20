#include<iostream>
using namespace std;

// int Nstair(int n){
// 	// base case
// 	if(n==0){
// 		return 1;
// 	}

// 	if(n<0){
// 		return 0;
// 	}



// 	// recursive case
// 	return Nstair(n-1)+Nstair(n-2)+Nstair(n-3);
// }


int Nstair(int n,int k){
	// base case
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}



	// recursive cas
	int sum=0;


	for(int i=1;i<=k;i++){
		sum=sum+Nstair(n-i,k);

	}
	return sum;
}
int main(){
	// k-->3
	int n;
	cin>>n;

	int k;
	cin>>k;
	// cout<<"No of ways "<<Nstair(n)<<endl;

	cout<<"No of ways "<<Nstair(n,k)<<endl;



	return 0;
}