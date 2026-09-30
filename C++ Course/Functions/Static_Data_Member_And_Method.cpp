#include <iostream>

using namespace std;

class Employee{
    int Id;// by Default, They are Private Variables
    static int count;
    // Count is the static Data Member of Class Employee

    public:
        void setData(void){
            cout<<"Enter the Id: ";
            cin>>Id;
            count++;
        }
        void getData(void){
            cout<<Id<<endl;
            cout<<"Employee No: "<<count<<endl;
        }

    static void getCount(void){
        // cout<<Id; ----> Throws Error because, its not an Static Variables
        cout<<"Value of count is "<<count<<endl;
    }
};

int Employee :: count; // Default Value is 0


int main(){
    
    Employee roshan, harry, luv;
    // roshan.Id = 1; -----> can't be initialized as they are private variables
    // roshan.count = 1;---^

    // for Roshan
    roshan.setData();
    roshan.getData();

    // for Harry
    harry.setData();
    harry.getData();

    // for Luv
    luv.setData();
    luv.getData();

    Employee::getCount();

    return 0;
}