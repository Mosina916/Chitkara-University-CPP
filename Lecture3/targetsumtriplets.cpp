#include<iostream>
#include<cmath>
using namespace std;
int main(){

	int n;
	cin>>n;  //9
	int arr[1005];

	// input array  5 7 9 1 2 4 6 8 3
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}


	// sort inbuild

	sort(arr,arr+n); //1 2 3 4 5 6 7 8 9

	int target;
	cin>>target;//10


	for(int i=0;i<=n-3;i++){
		int l=i+1;
	int r=n-1;

	while(l<r){
	if(arr[i]+arr[l]+arr[r]>target){
		r--;

	}
	else if(arr[i]+arr[l]+arr[r]==target){
		// print nos
		cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
		l++;
		r--;
	}
	else{
		l++;


	}

	}

	}
	

	return 0;
}