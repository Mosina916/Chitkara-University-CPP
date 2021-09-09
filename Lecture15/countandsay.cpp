#include<iostream>
using namespace std;
string countandsay(int n){//4
	// base case


	if(n==1){
		return "1";
	}

	// recursive case

	string prev=countandsay(n-1);//21
	string cur="";//""
	for(int i=0;i<prev.size();){
		char x=prev[i];
		int cou=0;
		while(i<prev.size()&&prev[i]==x){
			cou++;
			i++;

		}
		cur=cur+to_string(cou);
		cur.push_back(x);


	}
	return cur;



}


int main(){
	int n;
	cin>>n;
	cout<<countandsay(n)<<endl;//4

	
	return 0;
}