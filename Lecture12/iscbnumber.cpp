#include<iostream>
using namespace std;

int strtoint(string st){ //"816"
	int j=0;
	int ans=0;
	while(j<st.length()){
		ans=ans*10+(st[j]-'0');// 81*10+('1'-'0');=816
	 j++; //3

	}

	return ans;

	

} 

bool iscbno(string subs){
	int num=strtoint(subs); //61
	if(num==0||num==1){
		return false;
	}

	int arr[10]={2,3,5,7,11,13,17,19,23,29};

	for(int i=0;i<10;i++){
		if(arr[i]==num){
			return true;
		}
	}


	for (int i = 0; i <10; ++i)
	{
		if(num%arr[i]==0){
			return false;

		}

	}


	return true;


}


bool isvalid(bool *visited,int l,int r){ //l=0 r=3
	for(int i=l;i<r;i++){
		if(visited[i]==true){
			return false;
		}
	}

	return true;


}



int main(){
	int n;
	cin>>n; //5
	string s;
	cin>>s; //"81615"
	int cou=0;
	bool visited[10000];
	for(int i=0;i<s.length();i++){
		visited[i]=false;
	}


	for(int i=1;i<=s.length();i++){
		for(int j=0;j<=s.length()-i;j++){
			int e=j+i; //1
			string subs=s.substr(j,i); //8

			if(iscbno(subs)&&isvalid(visited,j,e)){
				cou++;

				for(int i=j;i<e;i++){
					visited[i]=true;
				}


			}

		}
	}


	cout<<cou<<endl;











	return 0;
}