#include<iostream>
using namespace std;

void towerofhanio(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}




	// recursive case
	towerofhanio(n-1,src,dest,helper);
	cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	towerofhanio(n-1,helper,src,dest);

}
int main(){
	int n;
	cin>>n;
	towerofhanio(n,'A','B','C');



	return 0;
}