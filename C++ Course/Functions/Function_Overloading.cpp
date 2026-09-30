#include <iostream>

using namespace std;

double pi = 3.14;

// **************** Addition Overloading ******************

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// ***************** Volume Overloading ****************

// ---------------- Cylinder ---------------
int volume(double r, int h){
    return (pi*r*r*h);
}

// ---------------- Cube -----------------
int volume(int a){
    return (a*a*a);
}

// ---------------- Cuboid ---------------
int volume(int l, int b, int h){
    return (l*b*h);
}

// ---------------- Sphere ----------------
double volumesp(double r){
    return (1.333*pi*r*r*r);
}

int main(){
    
    // Addition
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3, 6 and 7 is "<<add(3,6,7)<<endl;

    // Volume
    cout<<"Volume of Cylinder of radius 3 and height 7 is "<<volume(3,7)<<endl;
    cout<<"Volume of Cube of side 4 is "<<volume(4)<<endl;
    cout<<"Volume of Cuboid if lenght 2, breath 5 and height 7 is "<<volume(2,5,7)<<endl;
    cout<<"Volume of Sphere of radius 3 is "<<volumesp(3)<<endl;

    return 0;
}