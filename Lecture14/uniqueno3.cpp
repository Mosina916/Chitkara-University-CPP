#include<iostream>
using namespace std;


int uniqueno3(int*arr,int n){
	int freq[32]={0};

	for (int i = 0; i < n; ++i)
	{
		int no=arr[i];//3-->11

		int j=0;

		while(no>0){
			freq[j]=freq[j]+(no&1);//1&1-->1
			no=no>>1;//11>>1-->0
			j++;//2

		}

	}


	for(int i=0;i<32;i++){
		freq[i]=freq[i]%3;

	}


	// binary to decimal conversion
	int mult=1;
	int ans=0;
	for (int i = 0; i <32; ++i)
	{
		ans=ans+freq[i]*mult;//2+1*4-->6
		mult=mult<<1;//8
	}


	return ans;


}

int main(){

	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i < n;++i)
	{
		cin>>arr[i];
	}


	// 5 3 3 5 6 3 5

	cout<<uniqueno3(arr,n)<<endl;




	


	return 0;
}