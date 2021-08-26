#include<iostream>
using namespace std;


int fiboofn(int n){ //0

	if(n==0||n==1){
		return n;

	}



	// recursive case

	// with 2 steps above find final ans
	// int chotaans1=fiboofn(n-1);//fiboofn(3); //2

	// int chotaans2=fiboofn(n-2); //fiboofn(2); //1

	// int badaans=chotaans1+chotaans2;//2+1=3


	// return badaans;


	return fiboofn(n-1)+fiboofn(n-2); //2




}


int main(){



	// int n;
	// cin>>n; //4


	for(int n=0;n<=10;n++){

	cout<<fiboofn(n)<<endl;

	}





	return 0;
}