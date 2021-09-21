#include<iostream>
using namespace std;

int petrolpumps(int *gas,int *cost,int n){
	// 1 4 2 3 6 2//18
	// 2 3 4 5 6 7//27
	// -9
	int s=0;
	int cur=0;

	int total=0;

	for(int i=0;i<n; i++){//3
		total=total+gas[i]-cost[i];

	cur=cur+gas[i]-cost[i];//1-2-->negative //4-3-->1

	if(cur<0){
		cur=0;//abhi tak tank khali hai
		s=i+1;//1

	}

	}
	if(cur>=0){
		return s;

	}
	else{
		return -1;
	}



}
int main(){

	int n;
	cin>>n;
	int gas[1000000];
	int cost[1000000];


	for (int i = 0; i <n; ++i)
	{
		cin>>gas[i];
	}


	for (int i = 0; i <n; ++i)
	{
		cin>>cost[i];
	}



	cout<<petrolpumps(gas,cost,n)<<endl;





	return 0;
}