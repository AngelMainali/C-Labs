//finding reverse of the number


#include<iostream>
using namespace std;
class Palindrome;
class Reverse{
	int a;
	public:
	void getdata(){
			cout<<"enter a";
			cin>>a;
		}
		void calculate(Palindrome);
};
class Palindrome{
	int b;
	public:
	void getdata(){
			cout<<"enter b";
			cin>>b;
		}
		friend class Reverse;
};
void Reverse::calculate(Palindrome c){
	int d,e,rev=0,rem;
	d=a*c.b;
	
	e=d;
	while(d!=0){
		rem=d%10;
		rev=rev*10+rem;
		d=d/10;
	}
//cout<<"reverse of result is"<<rev;

	if(e==rev){
		cout<<"number is palindrome"<<rev;
	}
	else{
		cout<<"number is not palindrome"<<rev;
	}
	
}

int main(){
	Reverse r;
	Palindrome p;
	r.getdata();
	p.getdata();
	r.calculate(p);
}
