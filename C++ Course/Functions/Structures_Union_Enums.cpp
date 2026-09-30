#include <iostream>

using namespace std;

// *************** Structures ****************

typedef struct student{
    int Id;
    char favChar;
    int marks;
} sd;

// *************** Union *****************

union fees{
    int perMonth;
    float perAnnum;
    int perWeek;    
};


int main(){
    
    // ------------- Structures ------------ 

    sd ram;
    ram.Id = 12310042;
    ram.favChar = 'c';
    ram.marks = 92;

    cout<<"Student Id: "<<ram.Id<<endl;
    cout<<"Student favChar: "<<ram.favChar<<endl;
    cout<<"Student Marks: "<<ram.marks<<endl;

    // -------------- Union -------------

    union fees shubh;
    shubh.perMonth = 10000;
    cout<<"Fees is "<<shubh.perMonth<<endl;
    shubh.perAnnum = 120000;
    cout<<"Fees is "<<shubh.perAnnum<<endl;

    // ***************** Enum *****************

    enum meal{breakfast, lunch, dinner};
    meal m1 = dinner;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}