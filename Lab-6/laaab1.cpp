#include<iostream>
using namespace std;
class Vehicle{
	protected:
		int noofwheels;
		float maxspeed;
		public:
			void getdata(){
			cout<<"\n enter no  of wheels"<<endl;
			cout<<"\n enter max speed"<<endl;
			cin>>noofwheels>>maxspeed;
		}
		void showdata(){
			cout<<"\n no of wheels and max speed is "<<endl<<noofwheels<<endl<<maxspeed<<endl;
		}
};
class Passenger_carring_vehicle:  public Vehicle{
	protected:
		int noofpassenger;
		public:
			void enterdata(){
			cout<<"\n enter no of passsanger"<<endl;
			cin>>noofpassenger;
		}
		void displaydata(){
			cout<<"\n no of pasanger"<<endl<<noofpassenger;
		}
};
class Bus: public  Passenger_carring_vehicle {
	private:
		char route[20];
		char helpername[20];
		int fareperperson;
		public:
			void entrydata(){
				cout<<"\n enter route"<<endl;
				cout<<"\n enter helpername"<<endl;
				cout<<"\n enter fareperperson"<<endl;
				
				cin>>route>>helpername>>fareperperson;
			}
			void disdata(){
				cout<<"\n route , helpername, fareperperson is "<<endl<<route<<endl<<helpername<<endl<<fareperperson<<endl;
			}
		
};
class Taxi: public  Passenger_carring_vehicle{
	private:
	
		int fareperperson1;
		public:
			void entrydata1(){
				cout<<"\n enter  fareperperson"<<endl;
				cin>>fareperperson1;
			}
			void disdata1(){
				cout<<"\n fareperperson is "<<endl<<fareperperson1;
			}
		
};
int main(){
	Bus b;
	Taxi t;
	cout<<"\n  Enter bus details   "<<endl;
	b.getdata();
	b.enterdata();
	b.entrydata();
		cout<<"\n bus details  is "<<endl;
	b.showdata();
	b.displaydata();
	b.disdata();
	
	cout<<"\n  Enter taxi details   "<<endl;
	t.getdata();
	t.enterdata();
	t.entrydata1();
	cout<<"\n taxi details  is "<<endl;
	t.showdata();
	t.displaydata();
	t.disdata1();
}
