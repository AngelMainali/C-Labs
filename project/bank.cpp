#include<iostream>
const int minimum=500;
using namespace std;
class Account{
	protected:
			char name[20];
					int ac_no;
		char ac_type[20];
				int balance;
		public:
			void getdata(){
			cout<<"\n  enter name of customer"<<endl;
			cin>>  name;
			cout<<"\n  enter account number "<<endl;
			cin>>  ac_no;
			cout<<"\n  enter account type"<<endl;
			cin>>  ac_type;
			cout<<"\n  Enter the opening balance"<<endl;
			cin>>  balance;
		}
		  void showdata(){	
		  	cout<<"\n  The name of customer is  "<<  name<<endl;
		  	cout<<"\n  The account number is  "<<  ac_no<<endl;
		  	cout<<"\n  the account type is  "<<  ac_type<<endl;
		  	cout<<"\n  the opening balance is "<<  balance<<endl;	
		  }
};
class Current:public Account{
	protected:
		float deposite1;
		float withdraw1;
		public:
			void deposite(){
				cout<<"\n  Enter amount to deposite"<<endl;
				cin>>  deposite1;
				showdata();
				balance=balance+deposite1;
				cout<<"\n  Balance after deposite is  "<<balance;
			}
			void withdraw(){
			cout<<"\n  Enter amount to withdraw";
				cin>>  withdraw1;
			if(withdraw1<balance){
					showdata();
				balance=balance-withdraw1;
				cout<<"\n  Balance after withdraw is  "<<balance;	
			}
			else{
				cout<<"withdraw is prohibited";
			}
			}
			void checkbalance(){
				if(balance<minimum){
					cout<<"balance shoukdnt be less than 500";
					balance=balance-150;
					cout<<"after penalty main balance is"<<balance;
				}
			}
};
class Saving:public Account{
	protected:
		float deposite1;
		float interest1;
		float withdraw1;
		public:
			void deposite(){
				cout<<"Enter amount to deposite";
				cin>>deposite1;
				showdata();
				balance=balance+deposite1;
				cout<<"Balance after deposite is"<<balance;
			}
				void withdraw(){
			cout<<"Enter amount to withdraw";
				cin>>withdraw1;
			if(withdraw1<balance){
					showdata();
				balance=balance-withdraw1;
				cout<<"Balance after withdraw is"<<balance;
			}
			else{
				cout<<"withdraw is prohibited";
			}
		}
			void interest(){
				interest1=(balance*2*10)/100;
				balance=balance+interest1;
				cout<<"adding interest , the balance is"<<balance;
			}
			
};


 int main() {
    char ch;
    
    do {
        cout << "Enter c for current account and s for saving: ";
        cin >> ch;

        if (ch == 'C' || ch == 'c') {
            Current c;
            int choice;

            c.getdata();
            c.checkbalance();

            do {
                cout << "\n1. Display\n2. Deposit\n3. Withdraw\n4. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        c.showdata();
                        break;

                    case 2:
                        c.deposite();
                        break;

                    case 3:
                        c.withdraw();
                        break;

                    case 4:
                        exit(0);

                    default:
                        cout << "Invalid choice. Try again.\n";
                        break;
                }
            } while (true);
        } else if (ch == 'S' || ch == 's') {
            Saving s;
            int subchoice;

            s.getdata();
            //c.checkbalance();

            do {
                cout << "\n1. Display\n2. Deposit\n3. Withdraw\n4. Interest\n5. Exit\n";
                cout << "Enter your choice: ";
                cin >> subchoice;

                switch (subchoice) {
                    case 1:
                        s.showdata();
                        break;

                    case 2:
                        s.deposite();
                        break;

                    case 3:
                        s.withdraw();
                        break;

                    case 4:
                        s.interest();
                        break;

                    case 5:
                        exit(1);

                    default:
                        cout << "Invalid choice. Try again.\n";
                        break;
                }
            } while (true);
        } else {
            cout << "\nWrong choice. Try again.\n";
        }

    } while (true);

    return 0;
}





















/*int main(){
	Current c;
	Saving s;
	char ch;
	int choice , subchoice;
	cout<<"Enter c for current account and s for saving";
	cin>>ch;
	
		if(ch=='C'||ch=='c'){
	
		c.getdata();
		c.checkbalance();
			while(true) {
		cout<<"\n 1. Display   \n 2.Deposite  \n 3.Withdraw  \n 4.Exit  \n"<<endl;
		cout<<"\n  Enter your choice"<<endl;
		cin>>  choice;
		switch(choice){
			case 1:
				c.showdata();
				break;
				
				case 2:
				c.deposite();
				break;
				
				case 3:
				c.withdraw();
				break;
				
				case 0:
					return 0;
				
			case 4:
			exit(0);
		}
	}
}
	else if(ch=='S'||ch=='s'){
		
			s.getdata();
		//
		c.checkbalance();
		while(true){
		cout<<"\n 1. Display   \n 2.Deposite  \n 3.Withdraw  \n 4.Interest \n 5.Exit  \n"<<endl;
		cout<<"\n  Enter your choice"<<endl;
		cin>>  subchoice;
		
	
		switch(subchoice){
			case 1:
				s.showdata();
				break;
				
				case 2:
				s.deposite();
				break;
				
				case 3:
				s.withdraw();
				break;
				
				case 4:
				s.interest();
				break;
				   
				case 0:
					return 0;
				
				case 5:
				exit(1);
		}
	}
  }
	else{
		cout<<" \n Wrong choice"<<endl; 
	}
}*/
		
		

	

