#include <iostream>

using namespace std;

class Base{

    public:

        int a;

        void display(){
            cout<<"Display Base Class Variable: "<<a<<endl;
        }

};

class Derived : public Base{

    public:

        int b;

        void display(){
            cout<<"Display Base Class Variable: "<<a<<endl;
            cout<<"Display Derived Class Variable: "<<b<<endl;
        }

};

int main(){
    
    Base objBase;
    Derived objDerived;
    
    Base *basePointer;
    basePointer = &objDerived; //Pointing Base Class Pointer to Derived Class
    basePointer->a = 64;    
    // basePointer->b = 34; -----> will show error 
    basePointer->display();
    basePointer->a = 665;    
    basePointer->display();

    Derived *derivedPointer;
    derivedPointer = &objDerived;
    derivedPointer->a = 665;    
    derivedPointer->b = 54;
    derivedPointer->display();

    return 0;
}