#include<iostream>
using namespace std;
// syntax

	// returntype  functionname(aruguments){
	// task

	// }


// 


void fertocel(int init,int fina,int step){

	// task
	for(int f=init;f<=fina;f=f+step){

		int c=(5/9.0)*(f-32);
		cout<<f<<" "<<c<<endl;

	}

}

int main(){

	int init,fina,step; 
	cin>>init>>fina>>step; //0 300 20


	// int c=(5/9)(f-32);
	fertocel(init,fina,step);

	













	


	return 0;
}

