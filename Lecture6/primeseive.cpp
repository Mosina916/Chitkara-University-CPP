#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
void primeseive(int *p){
	// special cases 
	p[0]=p[1]=0;
	p[2]=1;

	// marking all odd numbers as prime
	for (int i = 3; i <=10000; i=i+2)
	{
		p[i]=1;
	}
	for (int i = 3; i <=10000;i=i+2) //i-->9
	{
		if(p[i]==1){
			for(int j=i*i;j<=10000;j=j+i){
			p[j]=0;
		}

		}

		
	}

}


int main(){


	int n;
	cin>>n; //20
	int p[10000]={0};
	primeseive(p);

	for(int i=0;i<=n;i++){
		if(p[i]==1){
			cout<<i<<" ";
		}
	}

	cout<<endl;



	return 0;
}