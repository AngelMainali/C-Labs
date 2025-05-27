//calculate average of four numbers

#include<iostream>
using namespace std;
class Second;
class First{
	int a,b;
	public:
		void getdata(){
			cout<<"enter a and b";
			cin>>a>>b;
		}
		void calculate(Second);
};
class Second{
	int c,d;
	public:
		void getdata(){
			cout<<"enter c and d";
			cin>>c>>d;
		}
 friend void First::calculate(Second);
};
void First::calculate(Second e){
	int f,g;
	f=a+e.c;
	g=b+e.d;
	int h;
	h=(f+g)/2;
	cout<<"average is"<<h;
}
int main(){
	First p;
	Second  q;
	p.getdata();
	q.getdata();
	p.calculate(q);
}
