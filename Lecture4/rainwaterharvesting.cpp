#include<iostream> //header file 
using namespace std;

int hei[1000000],le[1000000],ri[1000000];
int main(){ //starting point


	int n,i,j;
	cin>>n; //10;




	// take height of buildings

	for (i = 0; i < n; ++i)
	{
		cin>>hei[i];
	}


	// height= 0 2 1 3 0 1 2 1 2 1

	le[0]=hei[0];


	for(i=1;i<n;i++){
		le[i]=max(hei[i],le[i-1]);
	}


	ri[n-1]=hei[n-1];

	for(i=n-2;i>=0;i--){
		ri[i]=max(hei[i],ri[i+1]);

	}


	int water=0;


	for(i=0;i<n;i++){
		water=water+min(ri[i],le[i])-hei[i];

	}


	cout<<water<<endl;



	
	












	return 0; //sucessful execution/termination
}



