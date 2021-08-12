#include<iostream>
using namespace std;

void spiralprint(int arr[1000][1000],int row,int col){
	int sr=0;
	int sc=0;
	int ec=col-1;
	int er=row-1;


	while(sr<=er&&sc<=ec){
		// to print 1st row
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";

	}
	sr++;

	// for last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;

	// for last row
	for(int i=ec;i>=sc;i--){
		cout<<arr[er][i]<<" ";
	}
	er--;




	// first col
	for(int j=er;j>=sr;j--){
		cout<<arr[j][sc]<<" ";

	}
	sc++;

	}



	

}
int main(){
	int arr[1000][1000];
	int row,col;
	cin>>row>>col; //rows-->4 cols-->4


	//TAKE ARRAY I/P FROM USER
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];

		}

	}

	// spiral print


	spiralprint(arr,row,col);
	


	





	return 0;
}