#include<iostream>
#include<algorithm>
using namespace std;


int main(){

	int n,no,ans=0; // 7        1 1 2 2 3 3 4
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		ans=no^ans;
	}


	cout<<ans<<endl;



	return 0;
}