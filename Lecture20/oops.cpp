#include<iostream>
using namespace std;
// blueprint
class car{
	int price;//private
public:
	// variables

	// char name[200];//196 buckets waste-->so create dynamically

	// datatype * arrayname=new datatype[sizeofbucket];

	char*name;

	// string name;
	
	int seats;
	int modelno;
	const int tyres;
	static int co;// class se bahar initilize karlo
	// default constructor

	// car(){

	// }

	// //DEFAULT CONSTRUCTOR OVERride
	car():tyres(4){//initilization list
		cout<<"in deafult constructor"<<endl;
		name=NULL;
		co++;

	}


	// Parametrized constructor
	car(char *n,int p,int seats,int mn):tyres(4),modelno(mn),price(p){
		// name=n;
		cout<<"inside parametrized constructor"<<endl;
		name=new char[strlen(n)+1];

		strcpy(name,n);
		// pr ice=p;
		this->seats=seats;
		// modelno=mn;
		co++;


	}

	// member function

	void printdetailsofcar(){
	cout<<"name of car is "<<name<<endl;
	cout<<"price of car is "<<price<<endl;
	cout<<"seats of car is "<<seats<<endl;
	cout<<"modelno of car is "<<modelno<<endl;


	}

	// void printmodelno(){
	// 	cout<<"modelno of car is "<<modelno<<endl;

	// }


	void update(char *n){
		if(name!=NULL){
			delete[] name;
			name=NULL;
		}


		name=new char[strlen(n)+1];
		strcpy(name,n);

	}
	int getprice(){
		return price;
	}


	void setprice(int p){
		if(p>2000){
			price=p;

		}
		else{
			price=3000;
		}
		
	}
	// copy constructor
	car(car &x):tyres(4){//x is same as A  car x=A--<phirse copy constructor call
		cout<<"in copy constructor"<<endl;
		name=new char[strlen(x.name)+1]; //deep copy
		strcpy(name,x.name);
		// name=x.name; //shallow copy
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;
		co++;


	}

	// return type opeartor =(){

	// }


	void operator =(car &x){
		cout<<"in copy assignment constructor"<<endl;
		name=new char[strlen(x.name)+1]; //deep copy
		strcpy(name,x.name);
		// name=x.name; //shallow copy
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;

	}

	// dustructor
	~car(){

		cout<<"in dustrutor for car "<<name<<endl;
		co--;

	}









};



int car::co=0;
int main(){
	// int x=10;
	// whenever object is created constructor call ho jata hai

	car A;// an object A is formed of the type car
	// A.name="BMW";

	// strcpy(A.name,"BMW");// segmentation fault 

	A.update("BMW");



	// A.price=4000;
	// A.setprice(4000);
	A.setprice(-4000);
	A.seats=6;
	A.modelno=2020;

	A.update("qwerty");
	A.printdetailsofcar();



	// A.printdetailsofcar();



	// cout<<"name of car A is "<<A.name<<endl;
	// cout<<"price of car A is "<<A.price<<endl;
		// cout<<"price of car A is "<<A.getprice()<<endl;


	// getter and setter 





	// to access the variables int the main that are private we need to use functions

	// cout<<"modelno of car A is "<<A.modelno<<endl;
	// A.printmodelno();

	// car B;// an object B is formed of the type car
	// // strcpy(B.name,"Audi");
	// // B.name="Audi";
	// B.update("Audi");
	// B.price=3000;
	// B.seats=5;
	// B.modelno=2018;


	// B.printdetailsofcar();



	// cout<<"name of car B is "<<B.name<<endl;
	// cout<<"price of car B is "<<B.price<<endl;
	// cout<<"seats of car B is "<<B.seats<<endl;
	// cout<<"modelno of car B is "<<B.modelno<<endl;


	// car C("duster",5000,7,2019);//C will call the parametrized cobtrsuctor


	// cout<<"name of car C is "<<C.name<<endl;
	// cout<<"price of car C is "<<C.price<<endl;
	// cout<<"seats of car C is "<<C.seats<<endl;
	// cout<<"modelno of car C is "<<C.modelno<<endl;


	// C.printdetailsofcar();



		car D=A; //copy constructor
		// car D(A);

		// D.printdetailsofcar();



		
		// D.printdetailsofcar();



		D.name[0]='T';//i am just changing the first character of D

		// A.printdetailsofcar();
		// D.printdetailsofcar();

		// // copy assignment constructor
		car E;//default constructor
		E=D; //opeartor overloading

		E.name[0]='P';


		E.printdetailsofcar();


		cout<<car::co<<endl;


		// int y=10;
		// int x=y;



	return 0;
}