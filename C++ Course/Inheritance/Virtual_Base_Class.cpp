#include <iostream>

using namespace std;

/*                                                [A] (Base Class)
                                                   |
                                ___________________|___________________
                                |                                     |
                                |                                     |
              (Parent Class 2) [C]                                   [B]  (Parent Class 1)
                                |                                     |
                                |                                     |
                                |_____________________________________|
                                                   |
                                                   |
                                                  [D]  (Child Class)                                              


*/

class A{

    protected:
        int rollNo;

    public:
        void setNo(int a){
            rollNo = a;
        }

        void printNo(){
            cout<<"Roll Number: "<<rollNo<<endl;
        }

};

class B : virtual public A{

    protected:
        float maths,physics;

    public:
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void printMarks(){
            cout<<"Maths Marks: "<<maths<<endl;
            cout<<"Physics Marks: "<<physics<<endl;
        }

};

class C : virtual public A{

    protected:
        float score;
    
    public:
        void setScore(float sc){
            score = sc;
        }

        void printScore(){
            cout<<"Score:"<<score<<endl;
        }

};

class D : public B, public C{

    protected:
        float total;

    public:
        void display(){
            total = maths + physics + score;
            printNo();
            printMarks();
            printScore();
            cout<<"Total: "<<total<<endl;
        }

};

int main(){
    
    D d;
    d.setNo(423654);
    d.setMarks(85,89);
    d.setScore(273);
    d.display();

    return 0;
}