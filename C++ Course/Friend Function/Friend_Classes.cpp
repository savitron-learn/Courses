#include <iostream>

using namespace std;

// Forward Declaration
class complex;

class calculator{

    public:
        int add(int a, int b){
            return(a + b);
        }

        void sumComplex(complex , complex );            

};

class complex{

    int a,b;

    // Individually declaring function of anotjer class as friend
    // friend void calculator :: sumComplex(complex , complex );

    // Declaring entire class as friend
    friend class calculator;

    public:
        void setNo(int n1, int n2){
            a = n1;
            b = n2;
        }

        void display(){
            cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;           
        }


};


void calculator ::  sumComplex(complex o1, complex o2){
    int realSum =  (o1.a + o2.a);
    int imagSum = (o2.b + o2.b);
    cout<<"Your Complex Number is "<<realSum<<" + "<<imagSum<<"i"<<endl; 
}

int main(){
    
    complex c1,c2;
    calculator cal;

    c1.setNo(1 , 2);
    c1.display();

    c2.setNo(3 , 2);
    c2.display();
    
    cal.sumComplex(c1,c2);
    

    return 0;
}