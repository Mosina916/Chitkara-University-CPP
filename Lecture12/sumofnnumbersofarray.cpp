#include<iostream>
using namespace std;


int sumofnelements(int *arr,int n){
	// base case

	if(n==1){
		return arr[0];
	}



	// recursive case

	return arr[0]+sumofnelements(arr+1,n-1);



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


	cout<<"Total sum "<<sumofnelements(arr,n)<<endl;






	


	return 0;
}