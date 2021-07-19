#include<iostream> //header file 
using namespace std;
int main(){ //starting point

	int n;
	cin>>n;

	// for n rows


	for(int rowno=1;rowno<=n;rowno++){



	// spaces  print
	int spacesco=1; //yaad rakhega koansa time wala space print horaha hai
	while(spacesco<=n-rowno){
		cout<<"  ";
		spacesco=spacesco+1;

	}


	// numbers

	// inc order wale number

	int inval=rowno; //3 //yaad rakhega koansa no print karna hai
	int co=1; //count yaad rakhega ga koansa time wala print karna hai
	while(co<=rowno){ //3
		cout<<inval<<" ";  //3 4 5
		inval=inval+1; //6
		co=co+1; //4



	}


	// dec val
	int deval=2*rowno-2; //4


	int deco=1;
	while(deco<=rowno-1){

		cout<<deval<<" ";  
		deval=deval-1; //2

		deco=deco+1; //3



	}


	cout<<endl;






	}


	// for 1 row






	return 0; //sucessful execution/termination
}



