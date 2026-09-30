#include <iostream>

using namespace std;

class complex{

    int a,b;

    public:

        complex(void); // Declaration of Constructor
        complex(int, int); // Parameterized Constructor

        void display(){
            cout<<"Your Complex Number is "<<a<<"+i"<<b<<endl;
        }

};

complex :: complex(void){ // --------> Default Constructor
    a = 0;
    b = 0;
}

complex :: complex(int x, int y){ // --------> Parameterized Constructor
    a = x;
    b = y;
}

int main(){
    
    complex obj;
    obj.display();

    // complex object(5,7); -----> Implicit Call
    // complex object = complex(5, 7); -----> Explicit Call
    
    complex object = complex(5, 7);
    object.display();

    return 0;
}