#include<iostream>
using namespace std;

int digits(int no){ //984
	int co=0;

	while(no!=0){
		co++; //3
	no=no/10; //0

	}
	return co;
	



}
int main(){
	int t;
	int arr[200];
	cin>>t;//2
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}


		for(int i=0;i<=n-2;i++){ 
			for(int j=0;j<=n-2-i;j++){
				int fn=arr[j]; //93
				int sn=arr[j+1]; //984
				int digitsinfn=digits(fn); // 2
				int digitsinsn=digits(sn); //3

				long long int no1=fn*pow(10,digitsinsn)+sn;
				long long int no2=sn*pow(10,digitsinfn)+fn;
				if(no1>no2){
					swap(arr[j],arr[j+1]);
				}




			}
		}
		for(int i=n-1;i>=0;i--){
			cout<<arr[i];
		}
		cout<<endl;




	}






	return 0;
}