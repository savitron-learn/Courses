#include <iostream>

using namespace std;
/*

Rules of Order of Execution of Constructor in Derived Class

Case 1:
class B : public A{
    // Order of Execution of Constructor --> first A() then B()
};

Case 2:
class A : public B, public C{
    // Order of Execution of Constructor --> order of declaration || first B() then C() and then A()
};

Case 3:
class A : public B, virtual public C{
    // Order of Execution of Constructor --> since, B is virtual class || first C() then B() and then A()
};


*/


class Base1{

    protected:

        int data1;

    public:

        Base1(int i){
            data1 = i;
            cout<<"Base 1 Class Constructor Called"<<endl;
        }

        void displayBase1(){
            cout<<"Value of data2: "<<data1<<endl;
        }

};

class Base2{

    protected:

        int data2;

    public:

        Base2(int i){
            data2 = i;
            cout<<"Base 2 Class Constructor Called"<<endl;
        }

        void displayBase2(){
            cout<<"Value of data1: "<<data2<<endl;
        }

};

// Case 4:

class Derived : public Base2 ,public Base1{

    protected:
        int derived1,derived2;

    public:

        Derived(int a, int b, int c, int d) : Base2(a), Base1(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived Class Constructor Called"<<endl;
        }

        void displayDerived(){
            cout<<"Value of derived1: "<<derived1<<endl;
            cout<<"Value of derived2: "<<derived2<<endl;
        }

};

int main(){
    
    Derived obj(7,5,6,2);
    obj.displayBase1();    
    obj.displayBase2();    
    obj.displayDerived();    

    return 0;
}