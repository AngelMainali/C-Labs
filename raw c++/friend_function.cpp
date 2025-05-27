#include<iostream>
using namespace std;
class Displacement;
class Distance{
	private:
		float meter;
	public:
		void getdata(){
			
		cout<<"enter distance in meter";
		cin>>meter;
	}
	friend void convertadd(Distance,Displacement);
	
};
class Displacement{
	private:
		float milimeter;
	public:
		void getdata(){
		cout<<"enter displacement in milimeter";
		cin>>milimeter;
	}
	friend void convertadd(Distance,Displacement);
};
void convertadd(Distance d1, Displacement d2){
	float meter,milimeter;
	cout<<"distance given is"<<meter<<endl<<"displacement given is"<<milimeter<<endl;
	float c;
	c=d2.milimeter/1000;
	float t;
	t=c+d1.Distance;
	cout<<"Total sum after conversion is ="<<t;
}
int main(){
	Distance de;
	Displacement des;
	de.getdata();
	des.getdata();
	convertadd(de,des);
}

