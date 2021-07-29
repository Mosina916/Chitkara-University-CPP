#include<iostream> //header file 
using namespace std;


void updatearray(int a[],int n){ //arays are passed by refrence by default


	for(int i=0;i<n;i++){
		a[i]=a[i]+2;

	}

	cout<<"priting array in updatearray function "<<endl;

    for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}

	cout<<endl;



}

int main(){ //starting point

	int arr[100];
	int n;
	cin>>n; //5


	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	// arr=8,6,4,0,2





	// print array


	cout<<"priting array before updating values"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	updatearray(arr,n);

	// arr=8,6,4,0,2-->10,8,6,2,4

	cout<<"priting array after updating values"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	

	return 0; //sucessful execution/termination
}



