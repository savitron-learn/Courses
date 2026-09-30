#include <iostream>

using namespace std;

int main(){
    
    int a = 4;
    int* b = &a;
    
    // & --> Address of Operator
    
    cout<<"Address of a is "<<b<<endl;
    cout<<"Address of a is "<<&a<<endl;

    // * --> (Value at) Dereference Operator
    cout<<"Value of a at b (which is the address of a) is "<<*b<<endl;
    cout<<"Value at b is "<<*b<<endl;

    // Pointer to pointer
    int **c = &b;
    cout<<"Address of b is "<<c<<endl;
    cout<<"Value at b is "<<*c<<endl;
    cout<<"Value of a is "<<**c<<endl;

    return 0;
}