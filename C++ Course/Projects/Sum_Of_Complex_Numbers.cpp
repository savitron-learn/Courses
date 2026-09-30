#include <iostream>

using namespace std;

class complex{
    int a;
    int b;

    public:

        void setData(int x, int y){
            a = x;
            b = y;
        }

        void setDataBySum(complex x, complex y){
            a = x.a + y.a; 
            b = x.b + y.b; 
        }

        void display(){
            cout<<"Your Complex Number is "<<a<<"+i"<<b<<endl;
        }
};

int main(){
    
    complex c1,c2,c3;

    c1.setData(1 , 2);
    c1.display();

    c2.setData(3 , 2);
    c2.display();
    
    c3.setDataBySum(c1 , c2);
    c3.display();

    return 0;
}