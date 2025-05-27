#include<iostream>
using namespace std;
class Number{
	private:
		float num1,num2,add;
		public:
			void getdata(){
				cout<<"enter two numbers";
				cin>>num1>>num2;
			}
			void displaydata(){
				cout<<"result of addition of 2 number is"<<add;
			}
			Number adddata(Number n){
				Number obj;
				obj.add=num1+num2;
				return obj;
			}
};
int main(){
	Number one,two,three;
	one.getdata();
	two=one.adddata(one);
	two.displaydata();
}
