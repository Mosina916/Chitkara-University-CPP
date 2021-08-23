#include<iostream>
#include<algorithm>
using namespace std;


int main(){

	int n,no,ans=0; // 4      
	cin>>n;
	int arr[1000000];// 2 7 2 3

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		ans=ans^arr[i]; //7^3-->4

	}

	int temp=ans; //4-->7^3


	// cout<<ans<<endl; //100

	int pos=0,fp; 


	while(temp>0){
		if((temp&1)>0){
			// uss position pe 1 hai
			fp=pos;//2
			break;

		}
		else{
			pos++;
			temp=temp>>1;
		}
	}

	// cout<<fp<<endl;

	int mask=1<<fp;//1<<2-->4-->100

	int res=0;


	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){ //2 7 2 3
			res=res^arr[i];//0^7=7



		}
	}

	// res--->7

	// ans=4-->7^3
	int res2=ans^res;  //3


	cout<<min(res,res2)<<" "<<max(res,res2)<<endl;

















	



	return 0;
}