#include <iostream>

using namespace std;

template <class T1, class T2>

float Avg(T1 a, T2 b){

    float avg = (a+b)/2;
    return avg;

}

template <class T>

void Swap(T a, T b){

    T n = a;
    a = b;
    b = n;

}

int main(){
    
    float a;
    a = Avg(34,6);
    cout<<a<<endl;

    int x = 5, y = 7;
    Swap(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}