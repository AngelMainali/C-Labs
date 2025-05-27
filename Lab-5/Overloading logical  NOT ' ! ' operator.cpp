
// C++ program for ! Operator overloading 
  
#include <iostream> 
using namespace std; 
class Num { 
private: 
    int n; 
  
public: 
    
    Num(int a) { 
	n = a;
	 } 
   
    bool operator!() 
    { 
        n = !n; 
        if (n) 
            return true; 
        else
            return false; 
    } 
}; 

int main() 
{ 
   
    Num n1(0), n2(0); 
  
    if (!n1) { 
        cout << "a1 value is zero" << endl; 
    } 
    else { 
        cout << "a1 value is non-zero" << endl; 
    } 
  
    if (!n2) { 
        cout << "a2 value is zero" << endl; 
    } 
    else { 
        cout << "a2 value is non-zero" << endl; 
    } 
}
