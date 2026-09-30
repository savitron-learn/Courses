#include <iostream>

using namespace std;

class Base{

    public:

        int a;

        virtual void display(){
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
    basePointer = &objDerived;
    basePointer->a = 64;    
    // basePointer->b = 35;   ---> will still show error
    objDerived.b = 35;  
    basePointer->display();
    

    return 0;
}