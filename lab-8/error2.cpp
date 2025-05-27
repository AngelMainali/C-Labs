#include<iostream>

using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to throw string exception, 2 to throw integer exception: ";
    cin >> choice;

    try {
        if (choice == 1) {
            throw ("String Exception: Something went wrong!");
        } else if (choice == 2) {
            throw 42; 
        } else {
            cout << "Invalid choice." << endl;
        }
    } catch (...) {
        cout << "Caught an exception." << endl;
    }

    
}
