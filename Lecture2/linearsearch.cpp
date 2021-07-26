#include<iostream>
using namespace std;

int main(){

	int arr[]={4,9,3,9,1};

	int noofbuckets=sizeof(arr)/sizeof(int); //5


	int key=9;
	int i; //local varible


	for(int i=0;i<noofbuckets;i++){ //5

		if(key==arr[i]){
			cout<<"yes element is present"<<endl;
			break;
			// return 0;

		}


	}

	if(i==noofbuckets){
		cout<<"no element is not present"<<endl;

	}


	
	return 0;
}