#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char arr[1000];
	cin.getline(arr,1000);
	int i=0;
	while(arr[i]!='\0'){
		if(arr[i]>='A'&&arr[i]<='Z'){
		cout<<arr[i];
		i++;
	}

//lowercase
while(arr[i]>='a'&&arr[i]<='z'){
	cout<<arr[i];
	i++;

}
	

	cout<<endl;

	}
	


	return 0;
}