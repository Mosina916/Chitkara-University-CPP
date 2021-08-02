#include<iostream>
using namespace std;

// int ans=1;
// for(int i=1;i<=n;i++){
// 	ans=ans*i; //
// }


void multiply(int *arr,int &noofplacestoiterate,int no){
	int carry=0;

	for(int i=0;i<noofplacestoiterate;i++){
		int product=no*arr[i]+carry; //5*4+0=20  //5*2+2=12

		arr[i]=product%10;//20%10=0 //12%10=2
		carry=product/10; //12/10=1

	}

	while(carry!=0){
	arr[noofplacestoiterate]=carry%10; //1
	carry=carry/10; //1/10 =0
	noofplacestoiterate++;

	}
	


}


void factorial(int n){
	int arr[1000]={0};


	arr[0]=1;
	int noofplacestoiterate=1;


	for(int i=1;i<=n;i++){
		multiply(arr,noofplacestoiterate,i);

	}


	for(int i=noofplacestoiterate-1;i>=0;i--){
		cout<<arr[i];
	}
	cout<<endl;


}


int main(){
	int n;
	cin>>n;


	
	factorial(n);




	return 0;
}