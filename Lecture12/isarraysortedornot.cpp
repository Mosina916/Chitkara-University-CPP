#include<iostream>
using namespace std;

bool isarraysortedornot(int arr[],int n){ //9    n-->1
	// base case
	// single element is always sorted
	if(n==1){
		return true;
	}


	// recursive case
	if(arr[0]<=arr[1]&&isarraysortedornot(arr+1,n-1)){
		return true;

	}
	// else{
		return false;
	// }



}



bool issortedaeeay2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}




	// recursive case
	if(issortedaeeay2(arr,n-1)&&arr[n-1]>=arr[n-2]){
		return true;
	}

	return false;

}



bool isarraysortedornot3(int *arr,int n,int i){ //i==4

	// base case 
	if(i==n-1){
		return true;
	}




	// recursive case
	if(arr[i]<=arr[i+1]&&isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	return false;


}


int main(){

	int arr[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	// 1 4 5 8 9


	// if(isarraysortedornot(arr,n)){
	// 	cout<<"sorted"<<endl;
	// }
	// else{
	// 	cout<<"unsorted"<<endl;
	// }





	// 3rd way
	if(isarraysortedornot3(arr,n,0)){
		cout<<"sorted"<<endl;
	}
	else{
		cout<<"unsorted"<<endl;
	}






	


	return 0;
}