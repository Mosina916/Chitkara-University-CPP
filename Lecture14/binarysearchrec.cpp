#include<iostream>
using namespace std;

int binarysearchrec(int *arr,int s,int e,int key){ //1 6 9
	// base case
	if(s>e){
		return -1;

	}
	// recursive case


	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		return binarysearchrec(arr,mid+1,e,key);
	}
	else{
		return binarysearchrec(arr,s,mid-1,key);

	}


}
int main(){

	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}


	int key;
	cin>>key;

	cout<<"key is present at index "<<binarysearchrec(arr,0,n-1,key)<<endl;



	return 0;
}