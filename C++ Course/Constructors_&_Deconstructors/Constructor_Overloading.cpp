#include <iostream>

using namespace std;

class complex{

    int a,b;

    public:

        complex(){

            a = 3;
            b = 4;

        }

        complex(int x, int y){

            a = x;
            b = y;

        }

        complex(int x){

            a = x;
            b = 0;

        }

        void display(){
            cout<<"Your Complex Number is "<<a<<"+i"<<b<<endl;
        }

};


int main(){
    
    complex obj(4,5);
    obj.display();

    complex object(5);
    object.display();

    return 0;
}