#include<iostream>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void problem2048rev(int no){ //2
	// base case
	if(no==0){
		return;
	}



	// recursive case
	int digit=no%10; //2048%10--->8-->204%10-->4-->20%10-->0-->2%10-->2
	cout<<s[digit]<<" ";//eight four zero two
	problem2048rev(no/10);//204/10-->20/10-->2/10-->0





}


void problem2048nor(int no){ //2
	// base case
	if(no==0){
		return;
	}



	// recursive case
	problem2048nor(no/10);//2048/10-->204
	int digit=no%10; 

	cout<<s[digit]<<" ";






}


int main(){
	int no;
	cin>>no; //2048--->eight four zero two

	problem2048rev(no);
	cout<<endl;
	problem2048nor(no);

	



	return 0;
}