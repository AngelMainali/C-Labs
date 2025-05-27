#include<iostream>
#include<fstream> 
#include<stdlib.h>

using namespace std;

class Employee {
    char name[20];
    int age;
    float salary;

public:
    void getdata() {
        cout << "Enter name age salary: ";
        cin >> name >> age >> salary;
    }

    void displaydata() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e[10];
    int i;

    for (i = 0; i < 3; i++) {
        e[i].getdata();
    }

    fstream file("book.dat", ios::binary|ios::out);

    if (file.bad()) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    for (i = 0; i < 3; i++) {
        file.write((char*)&e[i], sizeof(e[i]));
    }

    file.close();

    return 0;
}

