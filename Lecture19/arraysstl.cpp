#include<iostream>
#include<array>
using namespace std;
int main(){
	// int a[]={1,2,3,4};//static mememory
	array<int,4> a={1,2,3,4};//
	int size=a.size();
	for (int i = 0; i <size; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	cout<<"element present at 2nd index "<<a.at(2)<<endl;
	cout<<"is array empty or not "<<a.empty()<<endl;
	cout<<"front element of array a is "<<a.front()<<endl;
	cout<<"Back element of array a is "<<a.back()<<endl;


	return 0;
}