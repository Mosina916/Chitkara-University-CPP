#include<iostream>
using namespace std;

int main(){

	// int -->4 bytes
	// float-->4 bytes
	// char 1 byte


	int a=10;
	char ch='A';

	//option 1 datatype
	cout<<"sizeof int is "<<sizeof(int)<<endl; //4

	cout<<"sizeof char is "<<sizeof(char)<<endl; //1
	cout<<"sizeof float is "<<sizeof(float)<<endl; //4


	cout<<"sizeof double is "<<sizeof(double)<<endl; //4


	// option 2 variable name


	cout<<"sizeof int is "<<sizeof(a)<<endl; //4

	cout<<"sizeof char is "<<sizeof(ch)<<endl; //1
	// cout<<"sizeof float is "<<sizeof(float)<<endl; //4


	// option 3 value 


	cout<<"sizeof int is "<<sizeof(60)<<endl; //4

	cout<<"sizeof char is "<<sizeof('A')<<endl; //1











	
	return 0;
}