#include<iostream>
using namespace std;
long long int n,m,x,y; //n-->total students m-->tc cb x-->noc student requires 100% 
	// y-->student has to return if he performs badly
bool kyamaimidnoofstudentskoscholarshipdepaarahi(int mid){

	return mid*x<=(n-mid)*y+m; //return


}


int main(){ 
	// 6 6 2 1 //4-->ms

	
	cin>>n>>m>>x>>y; //5 10 2 1
	int s=0; //0
	int e=n; //6
	int ans=0;

	while(s<=e){
		int mid=(s+e)/2;//3
	if(kyamaimidnoofstudentskoscholarshipdepaarahi(mid)==true){
		ans=mid;//4
		s=mid+1; //4

	}
	else{
		e=mid-1;
	}


	}

	cout<<ans<<endl;

	


	return 0;
}