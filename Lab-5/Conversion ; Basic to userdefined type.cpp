#include<iostream>
using namespace std;
class Dollar{
	float cent;
	int doll;

	public:
		Dollar(){
			doll=0;
			cent=0;
		}
		Dollar (float rs){
			
			
			float eq_doll=rs/70;
			doll=int(eq_doll);
			cent=100*(eq_doll-doll);
		}
		void display(){
			cout<<doll<<"dollar"<<cent<<"cent";
		}
};
int main(){
	Dollar d1,d2;
	int x,y;
	cout<<"enter the rupess x and y";
	cin>> x>>y;
	d1=x;
	d1.display();
	//cout<<"enter the rupess";
	//cin>> y;
	d2=y;
	d2.display();
}
