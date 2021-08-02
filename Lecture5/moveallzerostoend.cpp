#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int pos=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[pos]=arr[i];
			pos++;
		}
	}
	while(pos<n){
		arr[pos]=0;
		pos++;
	}



	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	




	return 0;
}