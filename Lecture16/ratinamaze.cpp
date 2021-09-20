#include<iostream>
using namespace std;
int sol[100][100]={0};

bool ratinamazr(char maze[][10],int i,int j,int n,int m){
	// base case

	if(i==n-1&&j==m-1){
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

		// return true;

		return false;
	}



	// recursive case

	sol[i][j]=1;


	// right move
	if(j+1<m&&maze[i][j+1]!='X'){
		// aage right budd sakta hai
		bool  kyamairightmovekarsaktihun=ratinamazr(maze,i,j+1,n,m); //true
		if(kyamairightmovekarsaktihun==true){
			return true;
		}


	}
	// move down
	if(i+1<n&&maze[i+1][j]!='X'){
		bool kyamaidownjaasaktihun=ratinamazr(maze,i+1,j,n,m);
		if(kyamaidownjaasaktihun==true){
			return true;
		}


	}

	sol[i][j]=0;
	return false;


}

int main(){

	char maze[][10]={
		"OOOO",
		"00XX",
		"0000",
		"XXOO"

	};
	int n=4; //rows-->4
	int m=4;//cols-->4

	ratinamazr(maze,0,0,n,m);



	return 0;
}