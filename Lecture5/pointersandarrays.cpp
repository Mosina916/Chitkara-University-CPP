#include<iostream>
using namespace std;

void update(int *arr,int n){
	// arr[i]=arr[i]+10;

	for(int i=0;i<n;i++){
		*(arr+i)=*(arr+i)+10;

	}
	
}


int main(){


	int arr[]={1,4,3,5,6};
	int n=sizeof(arr)/sizeof(int);//5


	cout<<"value of arr "<<arr<<endl; //pehle bucket ka address
	cout<<"value of &arr[0] "<<&arr[0]<<endl;  //pehle bucket ka address
	cout<<"Before update "<<endl;
	for (int i = 0; i < n; ++i)
	{

		cout<<arr[i]<<" "<<*(arr+i)<<endl;
		
	}


	
	update(arr,n);

	cout<<"After update "<<endl;


	for (int i = 0; i < n; ++i)
	{

		cout<<arr[i]<<" "<<*(arr+i)<<endl;
		
	}




	// for (int i = 0; i < n; ++i)
	// {
	// 	// cin>>arr[i];
	// 	cin>>*(arr+i);
	// }







	return 0;
}