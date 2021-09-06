#include<iostream>
using namespace std;


void mergetwosortedarray(int*arr,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int temp[100000];
	int k=s;

	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){//4<5
		temp[k]=arr[i];
		i++;
		k++;


	}
	else{
		temp[k]=arr[j];
		j++;
		k++;

	}

	}

	// 2nd part kuch elements bacch rahe hai

	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}

	// 1st part kuch elements bacch rahe hai
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}


// copying the elements back to arr array

	for(int i=s;i<=e;i++){
		arr[i]=temp[i];
	}
	

}

void mergesort(int*arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}


	// recursive case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);//part1--> 1 2 4 //
	mergesort(arr,mid+1,e);//part2-->3 5 ////
	mergetwosortedarray(arr,s,e);



}
int main(){
	int n;
	cin>>n;
	int arr[10000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	// n-->5    4 2 1 5 3

	mergesort(arr,0,n-1);


	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;









	return 0;
}