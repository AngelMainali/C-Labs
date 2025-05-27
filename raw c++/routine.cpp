#include<iostream>
using namespace std;
class Farhenheit{
	float farh;
	public:
		Farhenheit(){
		farh=0;
	}
	Farhenheit(float farh1){
		farh=farh1;
		
	}
	void display(){
		cout<<"temp in farh"<<farh;
	}
};
class Celsius{
	float cel;
	public:
	Celsius(){
		cel=0;
	}
	Celsius(float cel1){
		cel=cel1;
	}
	operator Farhenheit(){
		float temp;
		temp=  ( (cel*9)/5)+32;
		return Farhenheit(temp);
	}
	void display(){
		cout<<"temp in cel"<<cel;
	}
};
int main(){
	Celsius c1(40);
	c1.display();
	Farhenheit f1;
	f1=c1;
	f1.display();
}
