#include <iostream>

using namespace std;

int count = 0;
class Num{

    public:
        Num(){
            count++;
            cout<<"Constructor is called for Object "<<count<<endl;
        }

        ~Num(){
            cout<<"This is a Destructor for Object "<<count<<endl;
            count--;
        }

};

int main(){
    
    cout<<"Main Function"<<endl;
    cout<<"Create Object"<<endl;

    Num n1;

    {
        cout<<"Entering This Block"<<endl;
        cout<<"Two more Objects"<<endl;
        Num n2,n3;
        cout<<"Exiting This Block"<<endl;
    }

    cout<<"Back to Main Function"<<endl;

    return 0;
}