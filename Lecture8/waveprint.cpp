#include<iostream>
using namespace std;
int main(){
	int arr[1000][1000];
	int row,col;
	cin>>row>>col; //rows-->3 cols-->4


	//TAKE ARRAY I/P FROM USER
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];

		}

	}

	// wave print
	for(int j=0;j<col;j++){
		if(j%2==0){ //even
			// print top to bottom
			for(int i=0;i<row;i++){
				cout<<arr[i][j]<<" ";
			}

		}
		else{
			// print bottom to top
			for(int i=row-1;i>=0;i--){
				cout<<arr[i][j]<<" ";

			}
		}

	}

	cout<<endl;



	





	return 0;
}