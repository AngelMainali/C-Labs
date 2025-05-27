#include<iostream>
using namespace std;
int main(){
	
	float num1,num2,result;
	cout<<"enter two numbers";
	cin>>num1>>num2;
	try{
		if(num2!=0){
			result=num1/num2;
			cout<<"rsult"<<result;
		}
		else{
			throw num2;
		}
	}
		catch(float n){
			cout<<"division must be noon - zero";
		
	}
}
