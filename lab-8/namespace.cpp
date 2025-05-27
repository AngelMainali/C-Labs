#include <iostream>
using namespace std;


namespace variables {
    int x = 5;
    double y = 3.14;
    char ch = 'A';
 string str = "Hello, World!";
}

int main() {
    int x=3;

    
    cout<<"x: "<<x <<endl;
   cout << "x: " <<variables:: x << endl;
     cout<< "y: " << variables::y << endl;
    cout<< "ch: " <<variables::ch <<endl;
    cout<< "str: " <<variables::str << endl;
    
  using namespace variables;
     cout<<"\nx: "<<x <<endl;
   cout << "x: " <<variables:: x << endl;
     cout<< "y: " << y << endl;
    cout<< "ch: " <<ch <<endl;
    cout<< "str: " <<str << endl;

}

