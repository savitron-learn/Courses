#include <iostream>

using namespace std;

class Student{

    protected:

        int rollNo;

    public:

        void setRollNo(int r){

            rollNo = r;

        }

        void getRollNo(void){

            cout<<"Roll Number: "<<rollNo<<endl;

        }

};

class Exam : public Student{

    protected:

        float maths;
        float physics;

    public:

        void setMarks(float m1, float m2){

            maths = m1;
            physics = m2;
        }

        void getMarks(void){

            cout<<"Marks Obtained in Physics: "<<physics<<endl;
            cout<<"Marks Obtained in Mathematics: "<<maths<<endl;

        }

};

class Result : public Exam{

    protected:

        float percent;

    public:

        void display(){
            
            getRollNo();
            getMarks();
            cout<<"Percentage: "<<(maths + physics)/2<<" %"<<endl;

        }

};

// Student ------> Exam ------> Result  is called Inheritance Path

int main(){
    
    Result pragyan;
    pragyan.setRollNo(423654);
    pragyan.setMarks(76,94);
    pragyan.display();

    return 0;
}