#include <iostream>
using namespace std;

template <class T>
class Box {
private:
    T length;
    T breadth;

public:
    Box(T l, T b) {
    	length=l;
    	breadth=b;
	}

    T calculateVolume() {
        return length * breadth;
    }
};

int main() {
    Box<int> intBox(5, 10);
    cout << "Volume of integer box: " << intBox.calculateVolume() << endl;

    Box<double> doubleBox(2.5, 3.5);
    cout << "Volume of double box: " << doubleBox.calculateVolume() << endl;


}
