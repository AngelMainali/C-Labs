#include<iostream>
#include<string.h>

using namespace std;
class String{
	char str[20];
	public:
		void getdata(){
			cout<<"\nEnter String:\n"<<endl;
			cin>>str;
		}
		void showdata(){
			cout<<"\nThe string is\n"<<endl<<str;
		}
		String operator +(String s){
			String t;
			strcpy(t.str,str);
			strcat(t.str,s.str);
			return t;
		}
};
int main(){
	String s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	s3.showdata();

}
