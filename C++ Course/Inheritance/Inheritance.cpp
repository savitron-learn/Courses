#include <iostream>

using namespace std;

// Private Members are Never Inherited

// Base Class
class Employee{
    
    public:

        int Id;
        int salary;

        Employee(){}

        Employee(int id){
            Id = id;
            salary = 1000;
        }
        
};

// Derived Class

    // Format
    /*
    class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}} {
        /*code*\
    };
    */
         // visibility mode-
            // Default visibility mode is private
                // Private Mode - Public members of base class becomes private members of derived class
                // Public Mode - Public members of base class becomes public members of derived class
        
class Programmer : public Employee{

    public:

        int langCode = 9;

        Programmer(int id){
            Id = id;
            salary = 1500;
        }

        void getData(){
            cout<<Id<<endl;
        }

};

int main(){
    
    Employee roshan(1), harry(2);

    cout<<"Roshan - "<<roshan.salary<<endl;
    cout<<"Harry - "<<harry.salary<<endl;
    
    Programmer pragyan = Programmer(1);
    cout<<"Pragyan - "<<pragyan.Id<<endl;
    pragyan.getData();

    return 0;
}