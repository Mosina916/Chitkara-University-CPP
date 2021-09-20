#include<iostream>
using namespace std;
#define ll long long int
int coins[40];
ll optimalgamestrtegy(int i,int j){
// base case
	if(i>j){int coins[40];
		return 0;
	}

	// recursive case
	// consider piyush is taking first coin
	ll firstcoinpick=coins[i]+min(optimalgamestrtegy(i+2,j), optimalgamestrtegy(i+1,j-1));

	ll lastcoinpick=coins[j]+min(optimalgamestrtegy(i+1,j-1),optimalgamestrtegy(i,j-2));

	return max(firstcoinpick,lastcoinpick);



}
int main(){
	int n;
	cin>>n;
	
	for (int i = 0; i <n; ++i)
	{
		cin>>coins[i];
	}

	cout<<optimalgamestrtegy(0,n-1)<<endl;
	

	return 0;
}