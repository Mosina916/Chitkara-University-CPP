#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main(){

	int no;
	cin>>no;//378 /
	int temp=no;

	int sum=0,sumpf=0;


	while(temp!=0){
		sum=sum+temp%10;//3%10=3
		temp=temp/10; //3/1

	}

	//sum-->18; //8
		// 2*11*11=242

	while(no%2==0){
		sumpf+=2; //2
		no=no/2; //242/2=121

	}





	//no-->121


	for(int i=3;i<=sqrt(no);i=i+2){//
		while(no%i==0){ //121%11 //11
			int temp1=i; //11
			while(temp1){
				sumpf+=temp1%10; //6
				temp1=temp1/10; 
			}
			no=no/i; //11/11=1






		}

	}
	if(no>2){
		while(no>0){ //1
		sumpf=sumpf+no%10; //1
		no=no/10;//13/10=1


	}



	}


	if(sum==sumpf){
		cout<<1<<endl;

	}
	else{
		cout<<0<<endl;
	}


	














	return 0;
}