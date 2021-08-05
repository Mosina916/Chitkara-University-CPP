#include<iostream>
#include<climits>
#include<cmath>
using namespace std;


int main(){
	int t;
	int a[100000],b[100000]; //1 2 3 4 
	cin>>t;//2
	while(t--){
		int cs=0,ms=INT_MIN,csum=0;
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i) //-1 -2 -3  
		{
			cin>>a[i];
			csum=csum+a[i]; //-6
			cs=cs+a[i]; //0
			ms=max(cs,ms); //-1

			b[i]=-a[i];//1 2

			//kadenes algo

			
			if(cs<0){
				cs=0;
			}
			



		}
		// cout<<ms<<endl; //10

		// cout<<csum<<endl;//10




		int cand1=ms; //12



		// kadanes algo on b array
		cs=0,ms=0; //-1 -2 -3 -4
		for (int i = 0; i < n; ++i)
		{
			cs=cs+b[i];
			if(cs<0){
				cs=0;

			}
			ms=max(ms,cs);
		}

		int cand=ms; //0


		int cand2=csum-(-cand); //11-(-11);22
		cout<<max(cand1,cand2)<<endl; //max(12,22) //22






		// cout<<ms<<endl; //11















	}






	return 0;
}