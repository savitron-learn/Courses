#include <iostream>

using namespace std;

// ******************* Recursive Function *******************

//Ex-2  ------------------ Factorial -------------------

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

//Ex-1   ----------------- Fibonacci --------------------
// 1,1,2,3,5,8,13,21,34,55,89

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);   
}



int main(){
    
    int n;
    cout<<"Enter the Value of n :"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
    cout<<"Number at position "<<n<<" of Fibonacci is: "<<fibonacci(n)<<endl;

    return 0;
}