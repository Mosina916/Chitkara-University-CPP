#include<iostream>
using namespace std;


const int a=40;
int z=77; //global variable  //87

int main(){
	int a=50;//local scope
	int b=60;




	cout<<"value of z is "<<z<<endl; //77

	cout<<"value of a is "<<::a<<endl; //50

	// ::a=::a+1;

	cout<<"value of b is "<<b<<endl; //60
	if(a==50){
		int b=80;
		int z=66;
		cout<<"value of a is "<<a<<endl; //50

		cout<<"value of b is "<<b<<endl; //80

		cout<<"value of z is "<<z<<endl; //66


		// what if we want to print global variable inside if z is already present in if
		// scope resolution operator
		cout<<"value of global z is "<<::z<<endl; //77

		::z=::z+10;

		cout<<"value of global z after updation is "<<::z<<endl; //87



	}
	else{
		int a=20;
		int b=999;
		cout<<"value of a is "<<a<<endl; //20

		cout<<"value of b is "<<b<<endl; //999

	}

		cout<<"value of global z after updation is "<<::z<<endl; //87



	

	// cout<<a<<endl;
	// a=a+10;

	// cout<<a<<endl;






	return 0;
}