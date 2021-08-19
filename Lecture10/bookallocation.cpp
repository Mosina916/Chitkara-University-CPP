#include<iostream>
using namespace std;

bool agarmaimidkicapabilityrakhtihunkyamerisaaribooksfinishhorahi(int *books,int n,int m,int capability){

	int student=1;
	int currrentpages=0;

	for(int i=0;i<n;i++){ //10 20 30 40
		if(currrentpages+books[i]>capability){ //70
			// tum iss student ko assign nahi kar sakte

			currrentpages=books[i];

			student++; //3
			if(student>m){
				return false;
			}



		}
		else{
			currrentpages=currrentpages+books[i]; //30+30=60
		}
	}

	return true;



}


int bookallocation(int *books,int n,int m){
	int totalpages=0;
	for (int i = 0; i <n; ++i)
	{
		totalpages=totalpages+books[i];//constanr time
	}
	int s=books[n-1];
	int e=totalpages;

	int finalans=totalpages;

	while(s<=e){
		int mid=(s+e)/2; //54
	if(agarmaimidkicapabilityrakhtihunkyamerisaaribooksfinishhorahi(books,n,m,mid)==true){
		finalans=mid; //70
		e=mid-1;

	}
	else{
		s=mid+1;
	}


	}

	return finalans;

	
}


int main(){
	// int n;
	// cin>>n;
	// int arr[n];


	int t,n,m; //n-->books,m -->students
	cin>>t;
	while(t--){
		int books[100005];
		cin>>n>>m;
		for (int i = 0; i <n; ++i)
		{
			cin>>books[i];
		}


		cout<<bookallocation(books,n,m)<<endl;



	}

	

	return 0;
}