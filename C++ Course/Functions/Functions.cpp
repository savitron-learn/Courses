#include <iostream>

using namespace std;

// *************** Function Prototyping ******************

// int sum(int a, int b);// ---> Acceptable
int sum(int, int);// ---> Acceptable
// int sum(int a, b);// ---> Not Acceptable

void g(void);// Here, void is optional

int main(){
    
    int num1, num2;
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();

    return 0;
}

// *************** Functions ****************

int sum(int a, int b){
    //  formal parameters a and b will be taking value from actual parameters num1 and num2
    int c = a+b;
    return c;
}


void g(){
    cout<<"Hello! Good Morning";
}