#include <iostream>
using namespace std;

class Shape {
	
	protected:
    float area;
    
    public:
    virtual void getDimensions() = 0;  
    virtual void calculateArea() = 0;  
    virtual void display() {
        cout << "Area: " << area << endl;
    }


};

class Rectangle : public Shape {
	private:
    float length, width;
public:
    void getDimensions()  {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
    }

    void calculateArea() {
        area = length * width;
    }

    void display() {
        cout << "Rectangle ";
        Shape::display();
    }
};

class Circle : public Shape {
	private:
    float radius;
public:
    void getDimensions()  {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = 3.1415 * radius * radius;  
    }

    void display()  {
        cout << "Circle ";
        Shape::display();
    }

};

int main() {
    Shape *shape;

    Rectangle rectangle;
    Circle circle;

    shape = &rectangle;
    shape->getDimensions();
    shape->calculateArea();
    shape->display();

    shape = &circle;
    shape->getDimensions();
    shape->calculateArea();
    shape->display();

}
