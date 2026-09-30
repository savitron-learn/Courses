#include <iostream>

using namespace std;

class BankDeposit{

    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

        BankDeposit(){} // Blank Constructor needed to initialized the object before giving values

        BankDeposit(int p, int y, float r){

            principal = p;
            years = y;
            interestRate = r;
            returnValue = principal;

            for (int i = 0; i < y; i++){

                returnValue = returnValue * (1+interestRate);

            }

        }

        BankDeposit(int p, int y, int r){

            principal = p;
            years = y;
            interestRate = (float(r)/100);
            returnValue = principal;

            for (int i = 0; i < y; i++){

                returnValue = returnValue * (1+interestRate);

            }

        }

        void show(){

            cout<<"Principal amount was "<<principal<<"."
                <<" Return value after "<<years<<" is "<<returnValue<<endl;
        }
                      

};

int main(){
    
    BankDeposit bd1, bd2, bd3; // These object are initialized by Blank Construtor before giving values to them
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;

    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    
    bd2 = BankDeposit(p,y,R);
    bd2.show();
   
    return 0;
}  