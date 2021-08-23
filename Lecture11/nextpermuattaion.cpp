#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int *v, int s,int e){
	// 3 2 1
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;

	}
}




void nextpermuatation(int *v,int n){ //3 2 1 
	if(n<2){
		return;
	}

	// pehle kahan pe dec follow nahi horaha
	int p=0;

	for(int i=n-2;i>=0;i--){
		if(v[i]<v[i+1]){
			p=i;
			break;
		}
	}

	// 3 2 1 
	// p-->1  


	int q=0;
	for (int i = n-1; i >p; i--)
	{
		if(v[i]>v[p]){
			q=i;
			break;
		}
	}

	// 3 2 1 p-->0  q-->0
	if(p==0&&q==0){
		reverse(v,0,n-1);

		return;
	}

	// q-->3


	// swap

	swap(v[p],v[q]);

	// 1 2 3 //p--1 q-->2 //1 3 2

	// if(p<n-1){
			reverse(v,p+1,n-1);

	// }


}

int main(){

	int t;
	cin>>t;
	int v[10000];
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		{
			cin>>v[i]; 
		}
		// 1 2 3

		nextpermuatation(v,n); //1 3 2

		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}

	




	return 0;
}