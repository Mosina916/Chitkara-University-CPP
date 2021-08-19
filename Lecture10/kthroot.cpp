#include<iostream>
using namespace std;

#define ll long long int

ll search(ll n,ll k,ll s,ll e,ll ans){
//loop
	while(s<=e){
		ll mid=(s+e)/2;//3
	if(pow(mid,k)<=n){
		ans=mid; //6
		s=mid+1;


	}
	else{
		e=mid-1;
	}

	}

	return ans;
	


}


int main(){ 

	int t;
	cin>>t;
	while(t--){
		ll n,k; //314 3 x^3<=314
		cin>>n>>k;
		if(k==1){
			cout<<n<<endl; //10000
			continue;

		}

		ll ans=search(n,k,0,sqrt(n),-1);
		cout<<ans<<endl;





	}
	
	


	return 0;
}