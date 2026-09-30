#include <iostream>

using namespace std;

class X;

class Y;

void exchange(X &, Y & );

class X{
    
    int a;
    friend void exchange(X & ,Y &);

    public:
        void setData(int value){
            a = value;
        }

        void display(){
            cout<<"a = "<<a<<endl;

        }

};

class Y{

    int b;
    friend void exchange(X &,Y &);

    public:
        void setData(int value){
            b = value;
        }

        void display(){
            cout<<"b = "<<b<<endl;
        }


};

void exchange(X & o1, Y & o2){

    int add = o1.a;;
    o1.a = o2.b;
    o2.b = add;
    cout<<"a = "<<o1.a<<endl;
    cout<<"b = "<<o2.b<<endl;

}

int main(){
    
    X obj1;
    obj1.setData(5);
    obj1.display();

    Y obj2;
    obj2.setData(7);
    obj2.display();

    exchange(obj1,obj2);

    return 0;
}