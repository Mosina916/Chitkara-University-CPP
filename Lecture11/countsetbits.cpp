#include<iostream>
#include<algorithm>
using namespace std;


int main(){

	int no;
	cin>>no;
	int no2=no;
	int cou=0;
	while(no>0){ //110&001
		if((no&1)>0){//1&1
			cou++; //2

		}
		no=no>>1; //0


	}

	cout<<cou<<endl; //15 --101


cout<<__builtin_popcount(no2)<<endl;



	



	return 0;
}