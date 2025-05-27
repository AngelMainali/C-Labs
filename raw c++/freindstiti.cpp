#include <iostream>       
using namespace std;
class Time1;
class Time2{
	private:
		int min;
		public:
			void getdata(){
				cout<<"Enter the min";
				cin>>min;
			}
			friend void add(Time1,Time2);      //friend function declaration
};
class Time1{
	private:
		int min;
		public:
			void getdata(){
				cout<<"Enter the min";
				cin>>min;
			}
			friend void add(Time1,Time2);      //friend function declaration
};
void add(Time1 abc,Time2 def){
	float s;
	s= abc.min+ def.min;
	cout<<"the total min is"<<s;
}
int main(){
	Time1 abc;
	Time2 def;
	abc.getdata();
	def.getdata();
	add(abc,def);     //calling friend function
}
