#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int i){ //3
	// base case
	if(i==n-1){
		return;
	}


// recursive case
	// puts on element at its correct position

	for(int j=0;j<=n-2-i;j++){ 
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);

			}

		}

		bubblesortrec(arr,n,i+1);//3


}
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



	bubblesortrec(arr,n,0);


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