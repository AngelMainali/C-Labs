#include<iostream>
using namespace std;
class Calculate{
	private:
		float meter,centimeter;
		public:
			void getdata(){
				cout<<"enter meter and centimeter";
				cin>>meter>>centimeter;
			}
			void displaydata(){
				if(centimeter>=100){
					meter=meter+1;
					centimeter=centimeter-100;
				}
				cout<<meter<<"m"<<centimeter<<"cm";
			}
			Calculate adddata(Calculate c1){
				Calculate obj;
				obj.meter=meter+c1.meter;
				obj.centimeter=centimeter+c1.centimeter;
				return obj;
			}
};
int main(){
	Calculate one,two,three;
	one.getdata();
	two.getdata();
	three=one.adddata(two);
	three.displaydata();
}

