//Illustrating the use of arithmetic operator



#include<iostream>
using namespace std;
class Second;
class First{
	int a;
	public:
		void getdata(){
			cout<<"enter first number";
			cin>>a;
		}
		void calculate(Second);
	};
class Second{
	int b;
	public:
		void getdata(){
			cout<<"enter second number";
			cin>>b;
		}
friend class First;
};
void First::calculate(Second c){
cout<<"Addition"<<(a+c.b)<<endl;
cout<<"subtraction"<<(a-c.b)<<endl;
cout<<"multiplication"<<(a*c.b)<<endl;
cout<<"division"<<(a/c.b)<<endl;
cout<<"modulus"<<(a%c.b)<<endl;
}
int main(){
	First f;
	Second s;
	f.getdata();
	s.getdata();
	f.calculate(s);
}
