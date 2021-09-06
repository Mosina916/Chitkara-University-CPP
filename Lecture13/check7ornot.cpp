#include<iostream>
using namespace std;
bool check7(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}




	// recursive case
	if(arr[0]==7){
		return true;
	}
	return check7(arr+1,n-1);
}


int firstindexof7(int *arr,int n,int i){

	// base case
	if(i==n){
		return -1;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);

}


int lastindexof7(int *arr,int n,int i){


	// base case
	if(i==-1){
		return -1;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,n,i-1);

}

void allindices(int *arr,int n,int i){
	// base case
	if(i==n){
		return;
	}



	// recursive case
	if(arr[i]==7){
		cout<<i<<" ";//1 3 5
	}
	allindices(arr,n,i+1);
}





int main(){
	int arr[10000];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}
	if(check7(arr,n)){
		cout<<"7 is present"<<endl;

	}
	else{
		cout<<"7 is not present"<<endl;

	}


	cout<<"First index of 7 is "<<firstindexof7(arr,n,0)<<endl;
	cout<<"Last index of 7 is "<<lastindexof7(arr,n,n-1)<<endl;


	allindices(arr,n,0);







	return 0;
}