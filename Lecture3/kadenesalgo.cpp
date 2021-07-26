#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// int max=INT_MIN;

	int arr[100];
	int n;
	cin>>n; //7

	// kadenes algo

	// 7
	// 4 1 -8 6 2 -1 7

	int cs=0,ms=INT_MIN;

	for(int i=0;i<n;i++){
		cin>>arr[i]; //4 1 -8 6 2 -1 7
	cs=cs+arr[i]; //0+4=4+1=5-8=-3-->0+6=6+2=8-1=7+7=14
	if(cs<0){
		cs=0;
	}
	ms=max(ms,cs); //14


	}

	cout<<"maximum sum of subarray is "<<ms<<endl;
	


	

	return 0;
}