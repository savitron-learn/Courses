#include <iostream>

using namespace std;

class Base{

    private:

        int a;

    protected:

        int b;

    public:

        int c;

        void setData(){
            a = 0;
            b = 0;
            c = 0;
        }
        void display(){
            cout<<"Inside Base Class"<<endl;
            cout<<"a = "<<a<<" ----> Private Member"<<endl;
            cout<<"b = "<<b<<" ----> Protected Member"<<endl;
            cout<<"c = "<<c<<" ----> Public Member"<<endl;
            cout<<"Exit Base Class"<<endl;
        }

};


class Derived : protected Base{

    public:
        void setData(){
            // a = 6; ----> Can't be used as it is a private member
            b = 5; // ----> Can be used as it is a protected member, therefore can be used in inherited class
            c = 6; // ----> Can be used as it is a public member, therefore can be used in inherited class
        }
        void display(){
            cout<<"Inside Derived Class"<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
            cout<<"Exit Derived Class"<<endl;
        }

};

int main(){
    
    Base base;
    base.setData();
    base.display();

    Derived derived;
    derived.setData();
    derived.display();

    cout<<"Inside Main Function"<<endl;
    // base.a = 6;  -----> Can't be used as it is a private member
    // base.b = 8;  -----> Can't be used as it is a protected member   
    base.c = 10; // -----> Can be used as it is a public member
    cout<<"c = "<<base.c<<endl;
    cout<<"Exit Main Function"<<endl;

    return 0;
}