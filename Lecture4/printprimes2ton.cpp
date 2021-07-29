#include<iostream> //header file 
using namespace std;
int main(){ //starting point


	int no;
	cin>>no; //10

	cout<<"prime nos between "<<2<<" to "<<no<<" is "<<endl;

	for(int n=2;n<=no;n++){ //5
		int i=2; //initilization condition
	while(i<=n-1){ //5<=4
		if(n%i==0){
			// cout<<"not prime"<<endl;
			break;
		}
		i=i+1;

	}


	if(i==n){ //5==5
		cout<<n<<endl;

	}

	//o/p 2 3 5





	}


	

	

	return 0; //sucessful execution/termination
}



