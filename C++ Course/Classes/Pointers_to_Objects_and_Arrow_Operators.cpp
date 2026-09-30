#include <iostream>

using namespace std;

class Complex{

    int real;
    int imag;
    
    public:

    void setData(int a, int b){

        real = a;
        imag = b;

    }

    void getData(){

        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imag<<endl;

    }

};

int main(){
    
    // Complex obj;
    // Complex *ptr = &obj;
    Complex *ptr = new Complex;
    // (*ptr).setData(5,7);
    ptr -> setData(5,7); // ---> this is same as (*ptr).setData(5,7);

    (*ptr).getData();
    ptr -> getData(); // ---> this is same as (*ptr).getData();


    // // Array of Objects

    // Complex *ptr1 = new Complex[3];

    // ptr1 -> setData(4,8);
    // ptr1 -> getData();

    return 0;
}