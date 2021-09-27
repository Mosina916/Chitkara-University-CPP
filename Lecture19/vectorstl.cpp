#include<iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	v.push_back(4);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	v.push_back(3);
	v.push_back(1);
	cout<<v.size()<<endl;//3
	cout<<v.capacity()<<endl; //4

	cout<<"element present at 1st index "<<v.at(1)<<endl;
	cout<<"is vector empty or not "<<v.empty()<<endl;
	cout<<"front element of array a is "<<v.front()<<endl;
	cout<<"Back element of array a is "<<v.back()<<endl;

	v.pop_back();//4 3 1--> 4 3 


	// for each 
	for(int i:v){// for each i element in vector v;
		cout<<i<<" ";

	}
	cout<<endl;

	vector<int> arr(5,1);// 5 buckets of int type will get created and each bucket will get initilized with 1

	// vector<int> a1 last(v);







	return 0;
}