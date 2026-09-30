#include <iostream>
#include <string>

using namespace std;

class Employee{

    // ASSIGNING VARIABLES
    string name;
    int Id;
    long salary;
    static int count;
    int salary_Hike = 0;
    char workGrades;

    public:

        void getData(void){ // EMPLOYEE LOGIN

            cout<<"Enter the Name of Employee : ";
            cin>>name;
            cout<<"Enter the Employee Id : ";
            cin>>Id;
            cout<<"Enter the Employee Salary : ";
            cin>>salary;
            cout<<"Enter Employee Work Grade from A to E (CASE SENSITIVE) : ";
            cin>>workGrades;
            count++;

        }

        void chkData(void){ // CHECKING INPUT DATA

            if(workGrades != 'A' && workGrades != 'B' && workGrades != 'C' && workGrades != 'D' && workGrades != 'E'){
                cout<<"Incorrect Work Grade"<<endl;
                exit(0);
            }
            
            if(Id > 999999 || Id < 100000){
                cout<<"Incorrect Id"<<endl;
                exit(0);
            }

        }

        void salaryHike(void){ // TO CHECK SALARY HIKE

            if(workGrades == 'A'){
                salary_Hike = 0.5*salary;
                cout<<"Employee Salary Hike: "<<salary_Hike<<endl;
            }

            if(workGrades == 'B'){
                salary_Hike = 0.4*salary;
                cout<<"Employee Salary Hike: "<<salary_Hike<<endl;
            }

            if(workGrades == 'C'){
                salary_Hike = 0.3*salary;
                cout<<"Employee Salary Hike: "<<salary_Hike<<endl;
            }

            if(workGrades == 'D'){
                salary_Hike = 0.2*salary;
                cout<<"Employee Salary Hike: "<<salary_Hike<<endl;

            }

            if(workGrades == 'E'){
                salary_Hike = 0.1*salary;
                cout<<"Employee Salary Hike: "<<salary_Hike<<endl;

            }

        }

        void displayData(void){ // TO DISPLAY DATA

            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Id: "<<Id<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
            cout<<"Employee Work Grade: "<<workGrades<<endl;
            cout<<"Employee Total Salary: "<<(salary_Hike + salary)<<endl;

        }

        void Count(void){ // TO COUNT EMPLOYEE LOGGED IN

            cout<<"The Empployee Logged In : "<<count<<endl;

        }

};

// INITIALISING STATIC VARIABLE 'count'
int Employee :: count = 0;

int main(){
    
    Employee ep;
    
    for(int i = 0; i < 5; i++){

        ep.getData();
        ep.chkData();
        ep.salaryHike();
        ep.displayData();

    }

    ep.Count();

    return 0;
}