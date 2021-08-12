#include<iostream>
using namespace std;
int main(){
	// int 2d array
	// 1st way


	// int arr[3][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };


	// // cout<<arr[1][1]<<endl; //5
	// // cout<<arr[2][2]<<endl; //9

	// // print 2d array

	// for(int row=0;row<3;row++){

	// 	// prints o/p of 1 row
	// 	for(int col=0;col<3;col++){

	// 	cout<<arr[row][col]<<" ";

	// }

	// cout<<endl;


	// }

	// //address 
	// cout<<arr[0]<<endl; //123 147 error all rows 0x7ffee2b72930

	// cout<<arr[1]<<endl; //0x7ffee2b7293c
	// cout<<arr[2]<<endl; //0x7ffee2b72948


	//2nd way

	// int arr[][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };


	// char 2d array


	char ch[3][3]={
		{'A','B','C'},
		{'D','E','F'},
		{'G','H','I'}


	};

	for(int row=0;row<3;row++){

		// prints o/p of 1 row
		for(int col=0;col<3;col++){

		cout<<ch[row][col]<<" ";

	}

	cout<<endl;


	}


	cout<<ch[0]<<endl; //ABCDEFGHI

	cout<<ch[1]<<endl; //DEFGHI
	cout<<ch[2]<<endl; //GHI



	// char ch1[3][3]={
	// 	{'H','B','C'},
	// 	{'D','Y','F'},
	// 	{'G','H','P'}


	// };


// char ch1[][3]={
// 		{'H','B','C'},
// 		{'D','Y','F'},
// 		{'G','H','P'}


// 	};

	char ch1[][4]={
		{'H','B','C','\0'},
		{'D','Y','F','\0'},
		{'G','H','P','\0'}


	};

	for(int row=0;row<3;row++){

		// prints o/p of 1 row
		for(int col=0;col<3;col++){

		cout<<ch1[row][col]<<" ";

	}

	cout<<endl;


	}


	cout<<ch1[0]<<endl; //

	cout<<ch1[1]<<endl; //
	cout<<ch1[2]<<endl; //
	















	



	return 0;
}