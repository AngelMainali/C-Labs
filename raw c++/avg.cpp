#include<iostream>
using namespace std;
class Calculation{
	private:
		float maths, science,english,add,average;
		public:
			void getdata(){
				cout<<"ENter marks ko math science english";
				cin>>maths>>science>>english;
			}
			void displaydata(){
			average=add/3;
			cout<<"average is"<<average;
			}
			void adddata(Calculation c){
				add=(c.maths+c.science+c.english);
				
			}
};
int main(){
	Calculation one,two;
	one.getdata();
	two.adddata(one);
	two.displaydata();
	
	
}
