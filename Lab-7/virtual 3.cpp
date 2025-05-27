
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw(){
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shape,b;

    Circle circle;
    Square square;

    shape=&b;
    shape->draw();
    
    shape = &circle;
    shape->draw();  

    shape = &square;
    shape->draw();  

  
}
