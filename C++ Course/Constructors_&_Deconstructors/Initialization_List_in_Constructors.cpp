#include <iostream>

using namespace std;

/*
Syntax  for Initialization List in Constructor

constructor (argument) : initialization-section{
    assignment + other code;
}

class test{

    int a;
    int b;

    public: 
        test (int i, int j) : a(i), b(j){
            // code
        }

};
*/

class Test
{
    int b;
    int a;

public:

    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a*j)
    // Test(int i, int j) : b(j), a(i+b) ----> This will show error because 'a' was intialized first and 'b' after
    // Test(int i, int j) : b(j), a(i+b) ----> After intializing 'b' first and 'a' after, there will be no error
    
    Test(int i, int j) : b(j), a(i+b)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
