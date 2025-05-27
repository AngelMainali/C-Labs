//Friend function to calculate Force


#include<iostream>
using namespace std;
class Force2;
class Force1{
	private:
		float mass;
		public:
			void getdata(){
			cout<<"Enter mass";
			cin>>mass;
		}
			friend void result(Force1,Force2);
};
class Force2{
		private:
		float acceleration;
		public:
			void getdata(){
			cout<<"Enter acceleration";
			cin>>acceleration;
		}
		friend void result(Force1,Force2);
};
void result(Force1 f1,Force2 f2){
    float force;
	force=f1.mass*f2.acceleration;
	cout<<"Resulting force is"<<force;
}
int main(){
	Force1 a;
	Force2 b;
	a.getdata();
	b.getdata();
	result(a,b);
}
