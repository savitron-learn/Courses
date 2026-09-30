#include <iostream>

using namespace std;

class Employee{
    int Id;
    int salary;
    
    public:
        
        void setId(void){
            salary = 122;
            cout<<"Enter Id of Employee: ";
            cin>>Id;
        }
        
        void getId(void){
            cout<<"The Id of Employee: "<<Id<<endl;
        }
};

int main(){
    
    // Employee roshan,harry,luv;
    // roshan.setId();
    // roshan.getId();

    Employee ep[10];
    for(int i = 0; i < 4; i++){
        ep[i].setId();
        ep[i].getId();
    }


    return 0;

}
