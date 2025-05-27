 #include<iostream>
using namespace std;
class Magic{
	int a,b,c,temp;
	public:
		Magic(){
			cout<<"\n Enter two numbers "<<endl;
			cin>>a>>b;	
	/*if(a%2==0 && b%2==0){
				cout<<"\nBoth Numbers are Even.Numbers are "<<a<<"and"<<b<<endl;
			}
			else{
				cout<<"\nBoth Numbers are not Even,either of them may be odd.Numbers are "<< a <<" and "<< b <<endl;
			}*/
			
			
			if(a%2==0 && b%2==0){
				cout<<  a  <<"  and  "<<  b  << " both are even";
		}
		else if(a%2==0 && b%2!=0){
			cout<<  a  <<" is even "<<  b  << " is odd";
		}
		else if(a%2!=0 && b%2==0){
			cout<<  a  <<" is odd "<<  b  << " is even";
		}
		else{
			cout<<  a <<"  and  "<<   b  << " both are odd";
		}
		
	}
		
		
		Magic(int d, int e){
			a=d;
			b=e;
			cout<<"\n Initial value of a is  "<< a <<" and b is "<< b <<endl;
			temp=a;
			a=b;
			b=temp;
			cout<<"\n After swapping value of a is  "<< a <<" and b is "<< b <<endl;
		}
		Magic(int f , int g, int h){
			int i;
			a=f;
			b=g;
			c=h;
			i=(a>b)?((a>c)?a:c):b;
			cout<<"\nThe greatest number among three numbers using conditional operator is "<<i<<endl;
			
		}
};
int main(){
	Magic m2(7,8),m3(9,8,7),m1;
}
