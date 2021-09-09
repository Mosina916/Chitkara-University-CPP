#include<iostream>
using namespace std;

void subsequences(char in[],int i,char out[],int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;

	}



	// recursive case

	// 1 without a
	subsequences(in,i+1,out,j);//s("bc")




	// with a
	out[j]=in[i]; //a
	subsequences(in,i+1,out,j+1);//s("bc")






}
int main(){
	char in[100];
	cin>>in;//"abc"
	char out[100];
	subsequences(in,0,out,0);


	return 0;
}