#include<iostream>
using namespace std;
class Rectangle{
	private:
	float length,breadth,area;
    public:
    	void getdata(){
    		cout<<"Enter length and breadth  ";
    		cin>>length>>breadth;
		}
		void calculate(){
			area=length*breadth;
		}
		void displayresult(){
			cout<<"Area of rectangle is  "<<area;
		}
};
int main(){
	Rectangle r1;
	r1.getdata();
	r1.calculate();
	r1.displayresult();
}
