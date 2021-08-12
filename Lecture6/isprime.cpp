#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
bool isprime(int n){
	if(n==1){
		return false;
	}
	if(n==2){
		return true;
	}
	// for(int i=3;i<n;i++){ //n^2 iterations
	for(int i=2;i*i<=n;i++){ //nroot(n)-->iterations
		if(n%i==0){
			return false;
		}

	}
	return true;
}

int main(){
	int n;
	cin>>n;

	if(isprime(n)){
		cout<<"Prime"<<endl;
	}
	else {
		cout<<"Not Prime"<<endl;
	}






	return 0;
}