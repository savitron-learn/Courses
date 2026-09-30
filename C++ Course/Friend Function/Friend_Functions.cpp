#include <iostream>

using namespace std;

class Complex{

    int a,b;

    public:
        void setNo(int n1, int n2){
            a = n1;
            b = n2;
        }

        void display(){
            cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;          
        }

    friend Complex sumComplex (Complex x, Complex y);   // Let sumComplex use its private variables

};

Complex sumComplex(Complex x, Complex y){

    Complex z;
    z.setNo((x.a + y.a),(x.b + y.b));

    return z;
}

int main(){
    
    Complex c1,c2,sum;

    c1.setNo(1 , 2);
    c1.display();

    c2.setNo(3 , 2);
    c2.display();
    
    sum = sumComplex(c1,c2);
    sum.display();

    return 0;
}