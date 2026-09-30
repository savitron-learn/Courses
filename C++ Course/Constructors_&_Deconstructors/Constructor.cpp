#include <iostream>

using namespace std;

class complex{

    int a,b;

    public:

        complex(void); // Declaration of Constructor

        void display(){
            cout<<"Your Complex Number is "<<a<<"+i"<<b<<endl;
        }

};

complex :: complex(void){ // ---------> Default Constructor
    a = 10;
    b = 7;
}

int main(){
    
    complex obj;
    obj.display();

    return 0;
}