#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a = 89;
    cout<<"Value of a is "<<a<<endl;
    a = 45;
    cout<<"Value of a is "<<a<<endl;



    // ***************Constants****************** 

    const int CONS = 34;
    cout<<"the value of 'cons' is "<<CONS<<endl;
    
    // CONS is an constant variables ,so adding input will show error
    // CONS = 100;
    // cout<<"the value of 'CONS' is "<<CONS<<endl;



    // ***************Manipulators***************

       // endl is also a manipulators 

       int x = 3, y = 45 , z = 8857;
       cout<<"value of x is "<<x<<endl;
       cout<<"value of y is "<<y<<endl;
       cout<<"value of z is "<<z<<endl;
       
       cout<<"value of x is "<<setw(4)<<x<<endl;
       cout<<"value of y is "<<setw(4)<<y<<endl;
       cout<<"value of z is "<<setw(4)<<z<<endl;

       

    // *************Operators Precedence*************

    int b,c;
    int d =((b*2 + c)/2)-b-(c/2);
    cout<<"Enter the Number: "<<b<<endl;
    cin>>b;
    cout<<"Enter the Number you want to divide: "<<c<<endl;
    cin>>c;
    cout<<"The Number you Thought of is "<<d<<endl;


    return 0;
}