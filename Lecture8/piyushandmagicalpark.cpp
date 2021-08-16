#include<iostream>
using namespace std;

int main(){


	int n,m,k,s;
	cin>>n>>m>>k>>s;//n-->rows, m-->cols, k-->threshold strength , s-->total str

	char arr[100][100];

	// 10 ^6 int arr[1000000];


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <m; j++)
		{
			cin>>arr[i];
		}
	}


	


	cout<<endl;





	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <m; j++)
		{
			if(arr[i][j]=='.'){
				if(s>=k){
						if(j==m-1){
						s=s-2;
					}
					else{
						s=s-2; //'.'
						s--; //aage badhne ka
					}
				

				}
				else{
					cout<<"No"<<endl;
					return 0;

				}
			}


			else if(arr[i][j]=='*'){
				if(s>=k){
						if(j==m-1){
						s=s+5;
					}
					else{
						s=s+5; //'.'
						s--; //aage badhne ka
					}
				

				}
				else{
					cout<<"No"<<endl;
					return 0;

				}
			}



			else if(arr[i][j]=='#'){
					break;



			}


			
		}
	}

	if(s>=k){
		cout<<"Yes"<<endl;
		cout<<s<<endl;


	}


	



	return 0;
}