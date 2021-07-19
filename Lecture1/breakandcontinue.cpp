#include<iostream> //header file 
using namespace std;
int main(){ //starting point

	// int i=1;
	// while(i<=10){

	// 	// i-->6 -->print na ho -->skip 
	// 	if(i==6){
	// 		i=i+1; //7
	// 		continue;
	// 	}
	// 	cout<<i<<" "; //1 2 3 4 5 7 8 9 10


	// 	i=i+1; // 9
	// }
	// cout<<endl;


	int i=1;
	while(i<=10){

		// i-->6 -->print na ho -->skip 
		if(i==6){
			break; //current loop se bahar aao -->control goes to line 33 here
		}
		cout<<i<<" "; //1 2 3 4 5  


		i=i+1; // 2
	}

	cout<<endl;



	return 0; //sucessful execution/termination
}



