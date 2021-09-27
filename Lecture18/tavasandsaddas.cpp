#include<iostream>
using namespace std;
int main(){

	char a[20];
	// "74747"
	cin>>a;
	int len=strlen(a);
	int ans=0;
	// 4 ,3,2,1 digits
	ans=(1<<len)-2;//32-2//30


	for(int i=len-1,pos=0;i>=0;pos++,i--){//i==0,pos=4
		if(a[i]=='7'){
			ans=ans+(1<<pos);//30+1-->31+(1<<2)-->31+4-->35+(1<<pos)-->35+16-->51

		}

	}


	cout<<ans+1<<endl;

	return 0;
}