//celsius to fahrenheit passing arguments as object


#include<iostream>
using namespace std;
class Temperature{
	private:
		float celsius, fahrenheit;
	public:
void getdata(){
	    cout<<"Enter temperature in degree celsius";
    	cin>>celsius;
	}
void displaydata(){
		fahrenheit=(celsius*9/5)+32;
		cout<<"temperature in fahrenheit is"<<fahrenheit; 
	}
void adddata(Temperature t1,Temperature t2){
		celsius=t1.celsius+t2.celsius;
	}
};
int main(){
	Temperature one,two, three;
	one.getdata();
	two.getdata();
	three.adddata(one,two);
	three.displaydata();
}
