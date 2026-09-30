#include <iostream>

using namespace std;

class y;

class x{
    int data;
    public:
        void setValue(int value){
            data = value;
        }  
    
    friend void add(x,y);

};

class y{
    int data;
    public:
        void setValue(int value){
            data = value;
        }

    friend void add(x,y);

};

void add(x o1, y o2){
    cout<<"Addition of data of X and Y object: "<<(o1.data + o2.data)<<endl;
}

int main(){
    
    x a;
    a.setValue(4);

    y b;
    b.setValue(1);
    add(a, b);

    return 0;
}