#include<iostream>
#include<math.h>
using namespace std;
class Head{
	protected:
		float l,b,h;
		public:
			void getdata(){
				cout<<"\n enter l,b,h";
				cin>>l>>b>>h;
			}
			void shwodata(){
				cout<<"\n l b and h is"<<l<<b<<h;
			}
};
class Rect:virtual public Head{
	protected:
		float a;
	public:
		void calculate1(){
			a=(l*b);
			cout<<"\n area of rect is"<<a;
		}
};
class Tri:virtual public Head{
	protected:
		float c;
	public:
		void calculate2(){
			c=(b*h)/2;
			cout<<"\n area of tri is"<<c;
		}
};
class Cube:virtual public Head{
	protected:
		float d;
	public:
		void calculate3(){
			d=pow(l,3);
			cout<<"\n volume of cube is"<<d;
		}
};
class Cuboid:virtual public Head{
	protected:
		float e;
	public:
		void calculate4(){
			e=(l*b*h);
			cout<<"\n volume of cuboid is"<<e;
		}
};
class Result: public Rect,public Tri,public Cube,public Cuboid{
	protected:
		int m=200;
		float total;
		public:
			void calculate(){
				total = a+c+d+e;
				cout<<"\n resultant"<<total;
			}
};
class Extra : public Result{
	public:
		void  hello(){
		cout<<"I inherit the feature of Result";
		cout<<"value of m is"<<m;
	}
};
int main(){


	Extra q;
	q.getdata();
	q.calculate1();
	q.calculate2();
	q.calculate3();
	q.calculate4();
	q.calculate();
	q.hello();
	
	

}
