#include <iostream>

using namespace std;

// Global Variables
int c = 81;


int main(){

    // ***********************BUILT IN DATATYPES******************

    int a,b,c;
    cout<<"enter the value of a : "<<a<<endl;
    cin>>a;
    cout<<"enter the value of b : "<<b<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum is : "<<c<<endl;
    cout<<"the global value is : "<<::c<<endl;

    // **************LITERALS****************

    float d = 1.01f;
    long double e = 1.01l;
    cout<<"size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"size of 34.4L is "<<sizeof(34.4L)<<endl;

    cout<<"value of d is "<<d<<endl<<"value of e is "<<e;


    // ******************REFERENCE VARIABLES*******************

    float var = 25;
    float & ref = var;
    cout<<"Variables = "<<var<<endl;
    cout<<"Refference = "<<ref<<endl;

    // *************TYPECASTING**************

    float cast = 35.78;
    cout<<"the integer value of 'cast' is "<<(int)cast<<endl;
    cout<<"ALT 1: the integer value of 'cast' is "<<int(cast)<<endl;
    int ca = int(cast);
    cout<<"ALT 2: the integer value of 'cast' is "<<c<<endl;

    cout<<"the expresion is "<<cast+c<<endl;        
    cout<<"the expresion is "<<(int)cast+c<<endl;    
   

    return 0;
}