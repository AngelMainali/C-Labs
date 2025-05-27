#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		char name[20];
		float salary;
		public:
			void getdata(){
				cout<<"enter id,name,salary";
				cin>>id>>name>>salary;
			}
			void displaydata(){
				cout<<"\n id is"<<id<<endl;
				cout<<"\n name is"<<name<<endl;
				cout<<"\n salary is"<<salary<<endl;
			}
		
};
class Typist:public Employee{
	private:
		int typingspeed;
		public:
			void readdata(){
				cout<<"enter typing speed";
				cin>>typingspeed;
			}
			void showdata(){
				cout<<"typing speed is"<<typingspeed;
			}
};
int main(){
	Typist a,b;
	a.getdata();
	b.readdata();
	a.displaydata();
	b.showdata();
}
