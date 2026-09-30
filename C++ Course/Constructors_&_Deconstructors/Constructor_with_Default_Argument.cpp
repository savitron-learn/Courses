#include <iostream>

using namespace std;

class Simple{

    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b = 9, int c = 3){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void display(){

            cout<<"The Value of Data is "<<data1<<" , "<<data2<<" and "<<data3<<endl;

        }

};

int main(){
    
    Simple s(1);
    s.display();

    return 0;
}