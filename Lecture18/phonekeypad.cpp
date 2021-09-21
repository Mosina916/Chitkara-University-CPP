#include<iostream>
using namespace std;

char keys[10][10]={"","","ABC","DEF\0","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phonekeypad(char *in,int i,char *out,int j){//23-->
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}



	// recursive case

	// "23"-->2-->"ABC"
	int digit=in[i]-'0';//3


	for(int k=0;keys[digit][k]!='\0'; k++){
		out[j]=keys[digit][k];
	phonekeypad(in,i+1,out,j+1);




	}//3


}
int main(){

	char in[100];
	cin>>in;//"23"
	char out[100];
	phonekeypad(in,0,out,0);






	return 0;
}