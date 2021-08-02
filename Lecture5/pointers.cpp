#include<iostream>
using namespace std;
int main(){


	// syntax

	// datatype nameofvariavble=50;

	// int a=10;
	// float f=60.9;
	// double d=70.987;
	// cout<<"Value of a is "<<a<<endl; //10
	// cout<<"Value of f is "<<f<<endl; //60.9
	// cout<<"Value of d is "<<d<<endl; //70.987



	// cout<<"size of a is "<<sizeof(a)<<endl; //4
	// cout<<"size of f is "<<sizeof(f)<<endl; //4
	// cout<<"size of d is "<<sizeof(d)<<endl; //8


	// // &-->address of operator &bucketname--->address


	// cout<<"address of a is "<<&a<<endl; //0x7ffee85f9958
	// cout<<"address of f is "<<&f<<endl; //0x7ffee85f9954

	// cout<<"address of d is "<<&d<<endl; //0x7ffee85f9948


	// cout<<"size of &a is "<<sizeof(&a)<<endl; //
	// cout<<"size of &f is "<<sizeof(&f)<<endl; //
	// cout<<"size of &d is "<<sizeof(&d)<<endl; //


	// char ch='G';

	// // cout<<"Value of ch is "<<ch<<endl; //'A'

	// // cout<<"address of ch is "<<&ch<<endl; //This will not print the address


	// // // this will print the bucket value and iterate till it gets the null


	// // // fooling of compiler


	// cout<<"address of ch is "<<(int *)&ch<<endl;

	// cout<<"address of ch is "<<(float *)&ch<<endl;
	// cout<<"address of ch is "<<(double *)&ch<<endl;

	// 	cout<<"address of ch is "<<(void *)&ch<<endl;


	// 	// to store the address-->pointers


	// // styntax

	// // datatypte *pointername;
	// 	// datatypte* pointername;


	// int h=60; //800;
	// int *hptr=&h; //hptr-->800 //Initilization


	// cout<<h<<endl; //60
	// cout<<hptr<<endl; //add
	// cout<<&h<<endl; //add


	// // int h=60; //800;
	// // int* hptr=&h; //hptr-->800 //Initilization

	// int y=80; //600
	// int *yptr; 
	// yptr=&y; //Assignment

	// cout<<y<<endl; //80
	// cout<<yptr<<endl; //add
	// cout<<&y<<endl; //add


	// cout<<"&yptr "<<&yptr<<endl;


	// cout<<"*yptr "<<*yptr<<endl; //*pointer-->bucket 

	// *yptr=*yptr+20;

	// cout<<"y "<<y<<endl;











	// int *ptr1,*ptr2,*ptr3;

	// int u=70,l=60,r=30;


	// ptr1=&u;
	// ptr2=&l;
	// ptr3=&r;


	// cout<<"ptr1 "<<ptr1<<endl; //0x7ffeeaa1493c-->starting address


	// cout<<"ptr2 "<<ptr2<<endl; //0x7ffee5055938

	// cout<<"ptr3 "<<ptr3<<endl; //0x7ffee5055934

	// cout<<"ptr1+1 "<<ptr1+1<<endl; //0x7ffeeaa14940

	// cout<<"ptr1+2 "<<ptr1+2<<endl; //0x7ffeeaa1494


	// double d=40.9098;
	// double *dptr=&d;

	// cout<<"dptr "<<dptr<<endl; //100

	// cout<<"dptr+1 "<<dptr+1<<endl; //108


	// cout<<"dptr+2 "<<dptr+2<<endl; //10F


	char c='H';
	char* cptr=&c;
	// cout<<cptr<<endl;

	cout<<(void*)&c<<endl;
	cout<<(void*)(&c+1)<<endl;

	cout<<(void*)(&c+2)<<endl;









	

















		 
















	// int arr[10]={1,2};



























	return 0;
}