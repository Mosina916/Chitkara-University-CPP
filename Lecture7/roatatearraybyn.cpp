#include<iostream>
using namespace std;

int length(char*arr){
	int i;
	int cnt=0;
	for(i=0;arr[i]!='\0';i++){
		cnt++;
	}
	return cnt;
}




int main(){
	
	char arr[100];
	int n;
	cin>>n; //3
	cin.ignore();

	cin.getline(arr,100); //hello


	cout<<arr<<endl;
	int arrlength=length(arr); //5
	for(int i=arrlength-1;i>=0;i--){
		arr[i+n]=arr[i];
	}
	int i=0;
	int j=arrlength;
	for(int k=0;k<n;k++){
		arr[i]=arr[j];
		i++;
		j++;
	}
	arr[arrlength]='\0';

	cout<<arr<<endl;
	
	


return 0;



}