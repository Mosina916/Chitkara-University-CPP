#include<iostream>
using namespace std;
#define ll long long int
ll arr[1000000],prefixsum[1000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		// prefixsum[1000000]={0};
		for(int i=0;i<1000000;i++){
			prefixsum[i]=0;
		}
		prefixsum[0]=1;
		ll sum=0;

		// 1 3 2 6 4


		for(int i=0;i<n;i++){
			cin>>arr[i]; //4
			sum=sum+arr[i]; //2+4=6
			sum=sum%n; //-2%5 -->1

			cout<<sum<<endl;
			sum=(sum+n)%n; //6%5=1

			prefixsum[sum]++;




		}

		ll ans=0;
		for(int i=0;i<n;i++){
			ll no=prefixsum[i]; //1 3

			ans=ans+(no*(no-1)/2); //0+3
		}


		cout<<ans<<endl;





	}



	return 0;
}