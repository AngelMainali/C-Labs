//Exchanging value of two number

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
friend void First::calculate(Second);
};
void First::calculate(Second c){
      a=a+c.b;
      c.b=a-c.b;
      a=a-c.b;
	cout<<"a and b is"<<a<<"and"<<c.b;
}
int main(){
	First f;
	Second s;
	f.getdata();
	s.getdata();
	f.calculate(s);
}
