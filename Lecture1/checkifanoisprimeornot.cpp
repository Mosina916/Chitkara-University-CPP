#include<iostream> //header file 
using namespace std;
int main(){ //starting point
	int n;
	cin>>n; //5 -->2 to 4
	int i=2; //initilization condition
	while(i<=n-1){
		if(n%i==0){
			cout<<"not prime"<<endl;
			return 0;
		}
		i=i+1;

	}

	cout<<"Prime "<<endl;

	return 0; //sucessful execution/termination
}



