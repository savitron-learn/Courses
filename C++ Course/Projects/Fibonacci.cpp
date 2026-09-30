#include <iostream>

using namespace std;

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
    cout<<"Number at position "<<n<<" of Fibonacci is: "<<fibonacci(n)<<endl;

    return 0;
}