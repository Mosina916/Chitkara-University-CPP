#include<iostream>
#include<algorithm>
using namespace std;


bool iamabletoplaceallcowsatdistancemid(int *stalls,int n,int tc,int dist){
	int cp=1;
	int prev=stalls[0];
	for(int i=1;i<n;i++){
		if(stalls[i]-prev>=dist){
			cp++;
			prev=stalls[i];
			if(tc==cp){
				return true;
			}
		}
	}
	if(cp<tc){
		return false;
	}
	return true;


}
int main(){
	int n,c;
	int stalls[1000000];
	cin>>n>>c;

	for (int i = 0; i <n; ++i)
	{
		cin>>stalls[i];
		
	}
	// 1 2 8 4 9
	
	sort(stalls,stalls+n);// 1 2 4 8 9


	// search space
	int s=0;
	int e=stalls[n-1];


	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(iamabletoplaceallcowsatdistancemid(stalls,n,c,mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}

	cout<<ans<<endl;







	return 0;
}