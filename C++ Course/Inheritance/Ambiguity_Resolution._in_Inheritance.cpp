#include <iostream>

using namespace std;

class Morning{

    public:

        void greet(){
            cout<<"Good Morning"<<endl;
        }

};

class Night{

    public:

        void greet(){
            cout<<"Good Night"<<endl;
        }

};

class Greet : public Morning, public Night{

    int a;

    public:
        void greet(){
            Night :: greet();
        }

};

int main(){
    
    Morning gm;
    gm.greet();
    
    Night gn;
    gn.greet();

    Greet obj;
    obj.greet();


    return 0;
}