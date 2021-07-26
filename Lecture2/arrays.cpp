#include<iostream>
using namespace std;

int main(){

	// why we need array


	// int s1,s2,s3,s4,s5;
	
	// s1=30;
	// s2=60;
	// ......


	// // 500 students 
	// int s1, s2 ......s500;
	// s1=3;


	// .
	// .
	// .
	// .
	// .
	// s500=60;

	// cout<<s1<<s2<<s3........<<s500;


	// marks-->int

	// syntax

	// datatype arrayname[size];


	// indexing -->starts with 0 to size -1

	int arr[5];

	// arr[0]=50;
	// arr[1]=60;
	// arr[2]=40;
	// arr[3]=30;
	// arr[4]=20;

	// taking i/p from user

	// for(int i=0;i<=4;i++){
	// 	cin>>arr[i];
	// }



	// // cout<<arr[0]<<endl;
	// // cout<<arr[1]<<endl;
	// // cout<<arr[2]<<endl;
	// // cout<<arr[3]<<endl;
	// // cout<<arr[4]<<endl;


	// // using loop print array elements
	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<endl;
	// }


	// int arr2[7]={5,4,8,9,7,0,1};


	// you can skip the size of array

	int arr2[]={5,4,8,9,7,0,1};
	// int arr3[]={3,6,6,6,7,7,5,5,5,5,4,4,4,24,2,2,2,2,2,2};


	// cout<<"size of arr2 "<<sizeof(arr2)<<endl; //28


	// int totalbuckets=sizeof(arr2)/sizeof(int);


	// // 28=total buckets * sizeof(int);

	// cout<<" totalbuckets : "<<totalbuckets<<endl;


	int arr3[10]={0}; //whenever you initilize some buckets other bucket gts initilized with 0

	for(int i=0;i<=9;i++){
		cout<<arr3[i]<<endl;
	}

	// int arr7[1000000];


	int arr8[4]={8,6,7,3};
	










	// for(int i=0;i<=6;i++){
	// 	cout<<arr2[i]<<endl;
	// }












	
	return 0;
}