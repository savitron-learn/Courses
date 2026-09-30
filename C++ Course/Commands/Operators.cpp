#include <iostream>

using namespace std;

int main(){
    int a =6,b=7;
    
    cout<<"Operators in C++"<<endl;
    cout<<"Typers of Operators \n"<<endl;
    // ***************Arithematic Operators*************** 
    cout<<"Arithematic Operators\n"<<endl;
    cout<<"Value of a+b is "<<a+b<<endl;
    cout<<"Value of a-b is "<<a-b<<endl;
    cout<<"Value of a*b is "<<a*b<<endl;
    cout<<"Value of a/b is "<<a/b<<endl;
    cout<<"Value of a%b is "<<a%b<<endl;
    cout<<"Value of a++ is "<<a++<<endl;
    cout<<"Value of a-- is "<<a--<<endl;
    cout<<"Value of ++a is "<<++a<<endl;
    cout<<"Value of --a is "<<--a<<endl;
    cout<<"\n";
    
    // *************Assignment Operator*************** 
    cout<<"Assignment Operators"<<endl;
    cout<<"\n";

    int c = 3,d=9;
    char e = 'e';
    cout<<"Print c = "<<c<<", d = "<<d<<", e = "<<e<<endl;
    cout<<"\n";

    // ****************Comparison Operators***************** 
    cout<<"Comparison Operators"<<endl;
    cout<<"\n";

    cout<<"Value of a==b is "<<(a==b)<<endl;
    cout<<"Value of a!=b is "<<(a!=b)<<endl;
    cout<<"Value of a<=b is "<<(a<=b)<<endl;
    cout<<"Value of a>=b is "<<(a>=b)<<endl;
    cout<<"Value of a<b is "<<(a<b)<<endl;
    cout<<"Value of a>b is "<<(a>b)<<endl;
    cout<<"\n";
    
    
    // **************Logical Operators*************** 
    cout<<"Logical Operators"<<endl;
    cout<<"\n";
    a=6,b=7;
    cout<<"Value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"Value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"Value of (!(a==b)) is "<<(!(a==b))<<endl;

    cout<<"\n";
     


    return 0;
}