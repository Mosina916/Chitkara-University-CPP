#include<iostream>
using namespace std;


void mergetwosortedarrays(int*arr1,int n1,int*arr2,int n2){
	int temp[100000];
	int i=0,j=0,k=0;

	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){//7<6
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		j++;
		k++;

	}

	}

	// agar pehli array mai elements bacch rahe hai to directly copy them from arr1 to temp
	while(i<n1){
		temp[k]=arr1[i];
		i++;
		k++;

	}

	// agar dusri array mai elements bacch rahe hai to directly co
	while(j<n2){
		temp[k]=arr2[j];
		j++;
		k++;
	}


	// array print


	for(int i=0;i<k;i++){
		cout<<temp[i]<<" ";
	}

	cout<<endl;



	
}

int main(){
	int arr1[]={1,3,5,7,9,10,11};
	int arr2[]={2,4,6,7,8,9};

	int n1=sizeof(arr1)/sizeof(int); //4
	int n2=sizeof(arr2)/sizeof(int);//3
	mergetwosortedarrays(arr1,n1,arr2,n2);




	return 0;
}