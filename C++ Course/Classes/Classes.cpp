#include <iostream>

using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e, f;
    
    void setData(int a, int b, int c);//Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;        
        cout<<"The value of b is "<<b<<endl;        
        cout<<"The value of c is "<<c<<endl;        
        cout<<"The value of d is "<<d<<endl;        
        cout<<"The value of e is "<<e<<endl;        
        cout<<"The value of f is "<<f<<endl;        
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    
    Employee ep;
    // ep.a = 2; ====> This will show erorr as 'a' is private and can only be called in class 'Employee'.
    ep.d = 7;
    ep.e = 6;
    ep.f = 8;
    ep.setData(5,4,3);
    ep.getData();

    return 0;
}