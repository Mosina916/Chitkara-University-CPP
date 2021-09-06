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


	// bubble sort

	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){ 
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);

			}

		}

	}


	cout<<"After sorting "<<endl;
	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}