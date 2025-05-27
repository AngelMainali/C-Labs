#include<iostream>
using namespace std;

class Interest {
protected:
    float p, t, r, si;

public:
    void getdata() {
        cout << "\nEnter p, t, r: ";
        cin >>p>>t>>r;
       calculateInterest(); 
    }

     void calculateInterest() {
        si=(p*t*r)/100;
    }

    virtual void display() {
        cout << "Si is " << si << endl;
    
    }
};

class Amount : public Interest {
public:
 

    void display() {
    
        Interest::display();
        cout << "Amount is " << (si + p) << endl;
    }
};

int main() {
    Interest *i;
    Amount a;
    i = &a;
     i->getdata();
    i->display(); 
 
}
