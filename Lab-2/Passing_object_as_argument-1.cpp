//mm to m passing objects as arguments


#include<iostream>
using namespace std;
class Distance{
	private:
		float meter , millimeter;
	public:
void getdata(){
		cout<<"enter millimeter";
		cin>>millimeter;
	}
void displaydata(){
		meter=millimeter/1000;
		cout<<"length in meter"<<meter;
	}
void adddata(Distance d1, Distance d2){
		millimeter=d1.millimeter+d2.millimeter;
	}
};

int main(){
	Distance one, two, three;
	one.getdata();
	two.getdata();
	three.adddata(one,two);
	three.displaydata();
}
