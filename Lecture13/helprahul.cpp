#include<iostream>
using namespace std;
int helprahul(int *arr,int n,int s,int e,int key){
	if(s>e){
		return -1;
	}



	// mid
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	// part 1 sorted
	if(arr[s]<=arr[mid]){
		// if key is presemt in sorted part or not
		if(key>=arr[s]&&key<=arr[mid]){
			return helprahul(arr,n,s,mid-1,key);

		}
		else{
			return helprahul(arr,n,mid+1,e,key);
		}

	}
	// part 2 sorted
	else{
		if(key>=arr[mid]&&key<=arr[e]){
			return helprahul(arr,n,mid+1,e,key);

		}
		else{
			return helprahul(arr,n,s,mid-1,key);
		}

	}

}
int main(){
	int arr[1000000];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<helprahul(arr,n,0,n-1,key)<<endl;





	return 0;
}