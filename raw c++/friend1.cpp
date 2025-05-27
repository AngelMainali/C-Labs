#include<iostream>
using namespace std;
class cirlce{
	private:
		float rad;
		public:
			void getdata(){
				cout<<"enter radius";
				cin>>rad;
			}
			friend void getarea(circle);
			
};
void getarea(cricle c){
	float a;
	a=3.14*c.rad*c.rad;
	cout<<"area is"<<a;
	
	
}
int main(){
	circle d;
	d.getdata();
	getarea(d);
}
