#include<iostream>
static int count;
using namespace std;
class Destructor{

	public:
		Destructor(){
			count++;
			cout<<"\nnumber of object created : "<< count <<endl;
		}
		~Destructor(){
			cout<<"\nnumber of object destroyed : "<< count <<endl;
		count--;
		}
};
int main(){
Destructor a,b,c;
}
