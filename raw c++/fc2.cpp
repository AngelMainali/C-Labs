#include<iostream>
using namespace std;
class Array;
class Order{
	private:
		int y;
		public:
			void getdata(){
			cout<<"enter order for array";
			cin>>y;
		}
			void calculate(Array);
};
class Array{
	private:
		int a[50],i,n;
		public:
			void getdata(){
				for(i=0; i<n; i++){
			cout<<"enter elements for array";
			cin>>a[i];
		}
	}
 friend class Order;
};
void Order::calculate(Array x){
	int j,k,temp;
	for(j=0; j<y; j++){
		for(k=0; k=y; k++){
			if(x.a[j]>x.a[k]){
				temp=x.a[j];
				x.a[j]=x.a[k];
				x.a[k]=temp;
			}
		}
}
for(j=0; j<y; j++)
cout<<"Numbers in asscending order is"<<x.a[j];
}
int main(){
	Order p;
	Array q;
	p.getdata();
	q.getdata();
	p.calculate(q);
}
