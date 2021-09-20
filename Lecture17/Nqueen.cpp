#include<iostream>
using namespace std;

int co=0;

bool kyamaiqueendaalsaktihun(int board[][50],int i,int j,int n){
	// vertical check  and horizonatal
	for (int k = 0; k <n; k++)
	{
		if(board[k][j]==1||board[i][k]==1){
			return false;
		}
	}

	// // horizonatal check
	// for (int k = 0; k <n; k++)
	// {
	// 	if(board[i][k]==1){
	// 		return false;
	// 	}
	// }


	// diagonal check -->right


// /.LOOP
	int r=i,l=j;//3 2

	while(i>=0&&j<n){
		if(board[i][j]==1){
		return false;
	}
	i--;//0
	j++;//5

	}


	// diagonal check -->left 

	while(r>=0&&l>=0){
		if(board[r][l]==1){
		return false;
	}

	r--;
	l--;

	}

	return true;

}
bool Nqueen(int board[50][50],int i,int n){
	// base case 

	if(i==n){
		co++;
		for (int l = 0; l <n; l++)
		{
			for (int m = 0; m <n; m++)
			{
				if(board[l][m]==1){
					cout<<"Q ";
				}
				else{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;


		return false; //for all arrangements
	}



	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueendaalsaktihun(board,i,j,n)){
			board[i][j]=1;
			bool kyaneecheseansmila=Nqueen(board,i+1,n);
			if(kyaneecheseansmila==true){
				return true;
			}


			board[i][j]=0;//backtracking



		}

	}

	return false;




}
int main(){
	int board[50][50]={0};
	int n;
	cin>>n;
	Nqueen(board,0,n);

	cout<<co<<endl;



	return 0;
}