#include <iostream>
using namespace std;

class NumberExchanger {
public:
    virtual void exchangeNumbers(int& num1, int& num2) {
        cout << "Exchanging numbers in the base class." << endl;
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
};

class AdditiveExchanger : public NumberExchanger {
public:
    void exchangeNumbers(int& num1, int& num2) {
        cout << "Exchanging numbers with addition in the derived class." << endl;
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
};

class MultiplicativeExchanger : public NumberExchanger {
public:
    void exchangeNumbers(int& num1, int& num2)  {
        cout << "Exchanging numbers with multiplication in the derived class." << endl;
        num1 = num1 * num2;
        num2 = num1 / num2;
        num1 = num1 / num2;
    }
};

int main() {
    NumberExchanger* exchanger;

    AdditiveExchanger additive;
    MultiplicativeExchanger multiplicative;

    int a = 5, b = 10;
 cout << "\n before exchange (additive): a = " << a << ", b = " << b << endl;
    exchanger = &additive;
    exchanger->exchangeNumbers(a, b);
    cout << "After exchange (additive): a = " << a << ", b = " << b << endl;

    a = 5, b = 10; 
 cout << "\n before exchange (additive): a = " << a << ", b = " << b << endl;
    exchanger = &multiplicative;
    exchanger->exchangeNumbers(a, b);
    cout << "After exchange (multiplicative): a = " << a << ", b = " << b << endl;

    
}
