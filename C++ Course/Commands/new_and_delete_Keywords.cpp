#include <iostream>

using namespace std;



int main(){
    
    // // Basic Example of Pointer
    // int a = 4;
    // int* b = &a;
    // cout<<"Address of a is "<<b<<endl;
    // cout<<"Address of a is "<<&a<<endl;
    // cout<<"Value of a is "<<*b<<endl;

    // new Operator
    int *p = new int(40);
    cout<<"The value at address p is "<< *(p)<<endl;

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    cout<<"The value of arr[0] is "<< arr[0]<<endl;
    cout<<"The value of arr[1] is "<< arr[1]<<endl;
    cout<<"The value of arr[2] is "<< arr[2]<<endl;
    cout<<"The value of arr[3] is "<< arr[3]<<endl;

    // delete Operator
    delete p;
    cout<<"The value at address p is "<< *(p)<<endl;
    delete[] arr;
    cout<<"The value of arr[0] is "<< arr[0]<<endl;
    cout<<"The value of arr[1] is "<< arr[1]<<endl;
    cout<<"The value of arr[2] is "<< arr[2]<<endl;
    cout<<"The value of arr[3] is "<< arr[3]<<endl;

    return 0;
}