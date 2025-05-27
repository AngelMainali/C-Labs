#include<iostream>
using namespace std;
class Number{
	private:
		float num1,num2,add;
		public:
			void getdata(){
				cout<<"enter one number";
				cin>>num1;
			}
			void displaydata(){
				cout<<"result of addition of 2 number is"<<add;
			}
			Number adddata(Number n){
				Number obj;
				obj.add=n.num1+n.num1;
				return obj;
			}
};
int main(){
	Number one,two,three;
	one.getdata();
	three.getdata();
	two=one.adddata(three);
	two.displaydata();
}
