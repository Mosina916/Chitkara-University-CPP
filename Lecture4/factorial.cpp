#include<iostream> //header file 
using namespace std;

int fact(int n){

	// 5!=5*4*3*2*1

	int ans=1;

	for(int i=1;i<=n;i++){
		ans=ans*i; //120

	}

	return ans; //120


}

int ncr(int n,int r){
	int ans=fact(n)/(fact(r)*fact(n-r)); // n==r n>r

	return ans;
}
int main(){ //starting point
	// int n;
	// cin>>n; //5
	// int x=fact(n);

	// cout<<"factorial of "<<n<<" is "<<x<<endl;

	// // cout<<fact(n)<<endl;
	// // ncr=fact(n)/(fact(r)*fact(n-r))


	int n,r;
	cin>>n>>r;
	if(n>=r){
		cout<<"ncr value  is : "<<ncr(n,r)<<endl;

	}
	else{
		cout<<"Error"<<endl;
	}
	

	return 0; //sucessful execution/termination
}



