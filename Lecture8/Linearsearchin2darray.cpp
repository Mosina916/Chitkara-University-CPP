#include<iostream>
using namespace std;
int main(){
	int arr[1000][1000];
	int row,col;
	cin>>row>>col; //rows-->3 cols-->4
	int key;
	cin>>key; //12


	// int arr[3][4]={
	// 	{4,3,2,1},
	// 	{6,14,9,3},
	// 	{16,13,12,1}
	// }

	//TAKE ARRAY I/P FROM USER
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];

		}

	}


	// int arr[3][3]={
	// 	{1,2,3},
	// 	{9,18,57}



	// }; //18

	int j,i;

	for(i=0;i<row;i++){ // -- i-->2
		for(j=0;j<col;j++){ // j-->1  j==col-->naturally terminate

			if(arr[i][j]==key){
				//2 1

				cout<<"element is present at index "<<i<<" "<<j<<endl; //1 1
				break;


			}

		}

		if(j<col){
			break;

		}

	}
	if(i==row){
		cout<<"element is not present"<<endl;
	}





	return 0;
}