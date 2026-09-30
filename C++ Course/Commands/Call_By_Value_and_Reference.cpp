#include <iostream>

using namespace std;


// ******************* Call by Value *********************
int sum(int a, int b){
    int c = a+b;
    return c;
}


// ******************** Call by Refrence using Pointers ***********************
void swapPointers(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;    
}


// ******************** Call by Refrence using Reference Variables ***********************
void swapReferenceVar(int &a, int &b){
    int c = a;
    a = b;
    b = c;    
}



int main(){
    
    int x = 4,y = 5;
    int a = 14, b = 21;
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"Value of x is "<<x<<" and value of y is "<<y<<endl;

    swapPointers(&x,&y);// Swap x and y
    cout<<"Value of x is "<<x<<" and value of y is "<<y<<endl;
    
    cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;

    swapReferenceVar(a,b);// Swap a and b
    cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;



    return 0;
}