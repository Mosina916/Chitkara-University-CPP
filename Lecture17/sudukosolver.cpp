#include<iostream>
using namespace std;
bool kyanumberalreadycolrowyasquarematrixmaipresentnahihai(int mat[9][9],int i,int j,int number,int n){
	// col row check
	for(int k=0;k<n;k++){
		if(mat[k][j]==number||mat[i][k]==number){
			return false;
		}
	}

	// row check

	// for(int l=0;l<n;l++){
	// 	if(mat[i][l]==number){
	// 		return false;
	// 	}
	// }

	// root(n)*root(n) square matrix check
	n=sqrt(n);//3
	int starti=(i/n)*n;//3
	int startj=(j/n)*n; //3
	for(int k=starti;k<starti+n;k++){
		for(int l=startj;l<startj+n;l++){
			if(mat[k][l]==number){
				return false;
			}

		}
	}


	return true;



}

bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

		// return true;


		return false;
	}



	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}

	

	



	// recursive case

	for(int number=1;number<=n;number++){//3
		if(kyanumberalreadycolrowyasquarematrixmaipresentnahihai(mat,i,j,number,n)==true){
			mat[i][j]=number;
			bool kyabakiseansmila=sudukosolver(mat,i,j+1,n);
			if(kyabakiseansmila==true){
				return true;
			}
			mat[i][j]=0;//backtracking


		}

	}
	return false;


}

int main(){
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8 
// 1 9 8 3 4 2 5 6 7 
// 8 5 9 7 6 1 4 2 3 
// 4 2 6 8 5 3 7 9 1 
// 7 1 3 9 2 4 8 5 6 
// 9 6 1 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5 
// 3 4 5 2 8 6 1 7 9 


		sudukosolver(mat,0,0,9);

	return 0;
}