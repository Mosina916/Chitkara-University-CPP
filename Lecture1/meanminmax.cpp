#include<iostream> //header file 
#include<climits>
using namespace std;
int main(){ //starting point
	int n; //3
	cin>>n;
	int sum=0;
	int lar=INT_MIN;
	int sm=INT_MAX;


	// take n numbers 
	int co=1;  //initilization
	int no;

	while(co<=n){ //codition
		cin>>no; //3 1 4

	// for largest


	if(no>lar){
		lar=no; //4
	}

	// for smallest
	if(no<sm){
		sm=no; //1
	}

	// mai saare numbers ka sum kar rahi hun

	sum=sum+no; //8

	co=co+1; //updation

	}


	cout<<"mean is "<<(sum*1.0)/n<<endl;
	cout<<"largest "<<lar<<endl;
	cout<<"smallest "<<sm<<endl;
	


	return 0; //sucessful execution/termination
}



