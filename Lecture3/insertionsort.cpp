#include<iostream>
using namespace std;
int main(){

	int arr[100];
	int n;
	cin>>n; //5
	// array i/p
	for (int i = 0; i < n;i++)
	{
		cin>>arr[i];
	}

	// arr-->5 4 3 2 1

	cout<<"before sorting "<<endl;
	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// insertion sort
	int j;


	for(int i=1;i<=n-1;i++){
	int current=arr[i]; //3

	// piche baki elements k saath compare karne ka kaam

	for(j=i-1;j>=0&&arr[j]>current ;j--){
		
		arr[j+1]=arr[j]; //


	}
	arr[j+1]=current;


	}

	


	

	cout<<"After sorting "<<endl;
	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}