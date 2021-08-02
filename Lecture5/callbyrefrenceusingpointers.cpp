#include<iostream>
using namespace std;
void update(int *yptr){

	*yptr=*yptr+20;
	cout<<" value of x in update function is "<<*yptr<<endl;

}
int main(){


	int x=10;
	int *yptr=&x;
	cout<<" value of x is "<<x<<endl;


	update(yptr);
	cout<<" value of x  after update function is "<<x<<endl;


	



	return 0;
}