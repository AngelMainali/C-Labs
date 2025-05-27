#include<iostream>
using namespace std;
class Polygon{
	protected:
		float ldim1,bdim2;
		public:
			void readimension(){
				cout<<"enter the dim1 and dim2";
				cin>>ldim1>>bdim2;
			}
			void showdimension(){
				cout<<"the dim given by user is "<<ldim1<<bdim2;
			}
};
class Rectangle: public Polygon{
	protected:
	float a1;
	public:
		void calculate(){
			a1=ldim1*bdim2;
		}
		void showrect(){
			cout<<"area of rect is"<<a1;
		}
};
class Triangle:public Polygon{
		protected:
	float a2;
	public:
		void calculate2(){
			a2=((bdim2*ldim1)/2);
		}
		void showtri(){
			cout<<"area of tri is"<<a2;
		}
};
int main(){
	Rectangle r;
	Triangle t;
	cout<<"Rectangle"<<endl;
	r.readimension();
	r.showdimension();
	r.calculate();
	r.showrect();
	cout<<"triangle"<<endl;
	t.readimension();
	t.showdimension();
	t.calculate2();
	t.showtri();
	
}
