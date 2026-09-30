#include <iostream>

using namespace std;

class Base{

    int data1; // Private by Default (NOT INHERITABLE)

    public:

        int data2;
        void setData(void){
            data1 = 10;
            data2 = 20;
        }
        int getData1(){
            return data1;
        }
        int getData2(){
            return data2;
        }

};

// [A]
class Derived : public Base{

    int data3;

    public:

            void process(){
               data3 = data2 * getData1(); 
            }
            void display(){
                cout<<"Value of data1 is "<<getData1()<<endl;
                cout<<"Value of data2 is "<<data2<<endl;
                cout<<"Value of data3 is "<<data3<<endl;
            }

};

// [B]
class Derived : private Base{

    int data3;

    public:

        void process(){
            setData(); // <--------------------- DIFFERENCE //
            data3 = data2 * getData1(); 
        }
        void display(){
            cout<<"Value of data1 is "<<getData1()<<endl;
            cout<<"Value of data2 is "<<data2<<endl;
            cout<<"Value of data3 is "<<data3<<endl;
        }

};

// Difference b/w [A] and [B]

// 1 - data2 , setData() , getData1() , getData2() will become Private in [B] while in [A] will remain Public
// 2 - There is not difference b/w process() and display() in [A] and [B]

int main(){
    
    Derived der;
    // der.setData();
    der.process();
    der.display();    

    return 0;
}