#include<iostream>
#include<queue>
using namespace std;
int main(){
	// heap-->max heap ,min heap
	// priority_queue<int> p; //max heap
	// p.push(3);
	// p.push(2);
	// p.push(7);
	// p.push(9);
	// p.push(8);
	// p.push(6);

	// int size=p.size();//6

	// for (int i = 0; i <size; ++i)
	// {
	// 	cout<<p.top()<<" ";//9
	// 	p.pop();

	// }
	// cout<<endl;

	priority_queue<int,vector<int>, greater<int> > p;

	p.push(3);
	p.push(2);
	p.push(7);
	p.push(9);
	p.push(8);
	p.push(6);

	int size=p.size();//6

	for (int i = 0; i <size; ++i)
	{
		cout<<p.top()<<" ";//2
		p.pop();

	}
	cout<<endl;




	return 0;
}