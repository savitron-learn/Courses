#include <iostream>

using namespace std;

class Number{
    
    int a;

    public:

        Number(){
            a = 0;
        }

        Number(int num){

            a = num;

        }
        
        // When no copy constructor is found, then compiler supplies its own copy constructor 
        Number(Number &obj){

            cout<<"!!!!!!!!!Copy Constructor!!!!!!!!"<<endl;
            a = obj.a;

        }

        void display(){
            
            cout<<"The Number is: "<<a<<endl;

        }

};

int main(){
    
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy Constructor Invoked
    z1.display();

    z2 = z; // Copy Constructor not Invoked because we assign value to already created object

    Number z3 = z; // Copy Constructor Invoked because we created object and assign value
    z3.display();

    return 0;
}