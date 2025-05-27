#include <iostream>
using namespace std;


template <class T, class U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T f, U s){
    	first=f;
        second=s;
	}

 
    void display() {
        cout << "Pair: " << first << ", " << second << endl;
    }

    T getFirst() {
        return first;
    }

    U getSecond()  {
        return second;
    }
};

int main() {
   
    Pair<int, double> myPair(10, 3.14);
    myPair.display();

    cout << "First element: " << myPair.getFirst() << endl;
    cout << "Second element: " << myPair.getSecond() << endl;


}
