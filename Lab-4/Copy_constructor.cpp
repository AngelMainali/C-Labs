#include<iostream>
using namespace std;
class Copy{
	string address,name;
	int id,dob;
	public:
		Copy(string s,int date){
			id=1;
			name="angel";
			address=s;
			dob=date;
		}
		Copy(Copy& c){
			id=2;
			name="James";
			address=c.address;
			dob=c.dob;
		}
		void display(){
			cout<<"\nUser details is:  "<<endl<<"id is "<< id <<endl<<"name is "<< name <<endl<<"address is "<< address <<endl<<"dob is "<< dob <<endl;
		}
};
int main(){
	Copy c1("Kathmandu",2003);
	Copy c2(c1);
	c1.display();
	c2.display();
}
