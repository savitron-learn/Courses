#include <iostream>

using namespace std;

class A{

    int a;

    public:

        // A & setData(int a){
        //     this->a = a;            
        //     return *this;
        // }

        void setData(int a){
            this->a = a;
            // a = a; ---> This will give Garbage Value            
        }

        void getData(){
            cout<<"Value of a is "<<a<<endl;
        }

};

int main(){
    
    // 'this" is a keyword

    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();
    

    return 0;
}