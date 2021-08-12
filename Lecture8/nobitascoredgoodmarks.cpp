#include<iostream>
using namespace std;

int main(){


	int t;
	cin>>t;
	while(t--){

		long long int x,n; //10 3
		cin>>x;
		cin>>n;
		if(x%n==0){
			cout<<0<<endl;
		}
		else{
			long long int ed=x/n; //12 4 -->3


			cout<<min(x%n,((ed+1)*n-x))<<endl;




		}





	}

	return 0;

	

	





	return 0;
}