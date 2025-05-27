#include<iostream>
using namespace std;
class Nrb{
	float principle,simple_interest,amount;
	public:
		Nrb(){
			principle=0;
			simple_interest=0;
			amount=principle + simple_interest;
			cout<<"\nInitially user have a financial report listed below: "<<"\nPrinciple of "<<principle<<"\nSimple interest of "<<simple_interest<<"\nAmount of "<<amount<<endl;
		}
		Nrb(float p,float si){
			principle=p;
			simple_interest=si;
		    amount=principle + simple_interest;
			cout<<"\n Again user have a financial report listed below: "<<"\nPrinciple of "<<principle<<"\nSimple interest of "<<simple_interest<<"\nAmount of "<<amount<<endl;
		}
		Nrb(float pi){
			principle=pi;
			if(pi>5000){

				cout<<"\nYour principle amount exceeded the limit. please withdraw the money as soon as possible"<<endl;
			}
			else{
				amount=(pi*13)/100;
				cout<<"\namount is "<<amount;
			}
			
		}
};
int main(){
	Nrb n1,n2(6000,600),n3(5100);
	
}

