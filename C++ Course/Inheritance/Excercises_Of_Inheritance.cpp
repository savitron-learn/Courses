 /*
 You have to create 2 classes:

1.  SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the
    results using another function.

2.  ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific 
    operation of your chioice and displays the results using another function.

3.  Create another class HybridCalculator and inherit it using these 2 classes
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class SimpleCalculator{

    protected:

        int n1;
        int n2;

    public:

        int add(){
           return n1 + n2;
        }

        int substract(){
            return n1 -n2;
        }

        int multiply(){
            return n1 * n2;
        }

        int divide(){
            return n1 / n2;
        }

        void display1(){
         
        cout<<"Addition is "<<add()<<endl;            
        cout<<"Substraction is "<<substract()<<endl;           
        cout<<"Multiplication is "<<multiply()<<endl;            
        cout<<"Division is "<<divide()<<endl;       

        }

};

class ScientificCalculator{

    protected:

        int n3;

    public:

        int sq(){
            return n3 * n3;
        }

        double sqRoot(){
            return sqrt(n3);
        }

        int cube(){
            return sq() * n3;
        }

        int factorial(int n){
            n3 = n;
            if(n3<=1){
            return 1;
            }
        return n3*factorial(n3-1);
        }

        void display2(){
         
        cout<<"Square is "<<sq()<<endl;            
        cout<<"Square Root is "<<sqRoot()<<endl;           
        cout<<"Cube is "<<cube()<<endl;            
        cout<<"Factorial is "<<factorial(n3)<<endl;       
             
        }

};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

    public:
        
        void setData1(int a, int b){
            n1 = a;
            n2 = b;
        }

        void setData2(int c){
            n3 = c;
        }

};

int main(){
    
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    HybridCalculator SimCal;
    SimCal.setData1(a,b);
    SimCal.display1();

    int a;
    cout<<"Enter One Numbers: ";
    cin>>a;

    HybridCalculator SciCal;
    SciCal.setData2(a);
    SciCal.display2();
    
    return 0;
}