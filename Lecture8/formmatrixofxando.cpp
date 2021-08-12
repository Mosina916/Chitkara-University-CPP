#include<iostream>
using namespace std;

void formmatrixxo(char arr[1000][1000],int row,int col){
	int sr=0;
	int sc=0;
	int ec=col-1;
	int er=row-1;
	char ch='X';


	while(sr<=er&&sc<=ec){
		// to print 1st row
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;

	}
	sr++;

	// for last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;

	// for last row
	for(int i=ec;i>=sc;i--){
		arr[er][i]=ch;
	}
	er--;




	// first col
	for(int j=er;j>=sr;j--){
		arr[j][sc]=ch;

	}
	sc++;
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}

	}



	

}
int main(){
	char arr[1000][1000];
	int row,col;
	cin>>row>>col; //rows-->5 cols-->5


	
	// spiral print


	formmatrixxo(arr,row,col);


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	


	





	return 0;
}