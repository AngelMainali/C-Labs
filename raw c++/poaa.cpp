//hour and minute passing objects as arguments

#include<iostream>
using namespace std;
class time{
	private:
		float hour, min;
	public:
void getdata(){
		cout<<"enter hour and min";
		cin>>hour>>min;
	}
void diplaydata(){
		if(min>=60){
				hour=hour+1;
		    min=min-60;
		
			}
		cout<<"time is"<<hour<<"  hour and"<<min<<"  minute";
	}
void adddata(time t1, time t2){
		hour=t1.hour+t2.hour;
		min=t1.min+t2.min;
				
	}
};
int main(){
	time one, two, three;
	one.getdata();
	two.getdata();
	three.adddata(one, two);
	three.diplaydata();
}
