#include<iostream>
#include<cstring>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int freq[26]={0};
	int i=0;
	while(s[i]!='\0'){
		freq[s[i]-'a']++; //a-a-->0
		i++;

	}
	int max=0;
	int k;
	for(int i=0;i<26;i++){
		if(freq[i]>max){
			max=freq[i]; //8
			k=i; //3
			
		}
	}
	char fans='a'+k; //97+3=100
	cout<<fans<<endl;

	
	return 0;
}