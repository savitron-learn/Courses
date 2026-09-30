#include <iostream>

using namespace std;

class Base1{

    protected:

        int base1_var;

    public:

        void set_base1(int a){

            base1_var = a;

        }
        
};

class Base2{

    protected:

        int base2_var;

    public:

        void set_base2(int a){

            base2_var = a;

        }

};

class Base3{

    protected:

        int base3_var;

    public:

        void set_base3(int a){

            base3_var = a;

        }

};

class Derived : public Base1, public Base2, public Base3{

    public:
        void show(){

            cout<<"Value of Base 1 is "<<base1_var<<endl;
            cout<<"Value of Base 2 is "<<base2_var<<endl;
            cout<<"Value of Base 3 is "<<base3_var<<endl;
            cout<<"Sum of Base 1, Base 2 and Base 3 is "<<base1_var + base2_var + base3_var<<endl;
        }

};

int main(){
    
    Derived obj;
    obj.set_base1(34);
    obj.set_base2(66);
    obj.set_base3(57);
    obj.show();

    return 0;
}