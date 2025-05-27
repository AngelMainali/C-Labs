#include<iostream>
using namespace std;

namespace variable{
	int x=3;
	float y=9.8;
	char ch='s';	
}
int main(){

	cout<<"x"<<variable::x;
	
	
	
	using namespace variable;
	
		cout<<"x"<<x;
		cout<<"y:"<<y;
	
}

