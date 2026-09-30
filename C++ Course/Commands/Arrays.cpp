#include <iostream>

using namespace std;

int main(){
    
    // ********************Arrays********************

    int marks[5] = {35, 98, 32, 99, 70};// '5' is optional, C++ is inteligent enough to understand that there are 5 arrays
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // --------------Printing through for loop----------------

    for(int i = 0; i<5 ; i++){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // --------------Printing through while loop----------------

    int j = 0;
    while(j<5){
        cout<<"the value of marks "<<j<<" is "<<marks[j]<<endl;
        j++;
    }

    // --------------Printing through do-while loop----------------

    do{
        cout<<"the value of marks "<<j<<" is "<<marks[j]<<endl;
        j++;
    }while(j<5);

    // --------------I/O with Arrays-------------

    int mathMarks[4];
    cout<<"these are maths marks"<<endl;

    for(int i = 0; i<5 ; i++){
        cout<<"Enter Math Marks "<<i<<endl;
        cin>>mathMarks[i];    
    }
    
    for(int i = 0; i<5 ; i++){
        cout<<"the value of marks "<<i<<" is "<<mathMarks[i]<<endl;
    }



    // **********************Arrays Pointers**********************


    int* p = marks;
    cout<<"value of mark[0] is "<<p<<endl;
    cout<<"value of mark[1] is "<<(p+1)<<endl;
    cout<<"value of mark[2] is "<<(p+2)<<endl;
    cout<<"value of mark[3] is "<<(p+3)<<endl;
    cout<<"value of mark[4] is "<<(p+4)<<endl;

    cout<<"value of mark[0] is "<<*p<<endl;
    cout<<"value of mark[1] is "<<*(p+1)<<endl;
    cout<<"value of mark[2] is "<<*(p+2)<<endl;
    cout<<"value of mark[3] is "<<*(p+3)<<endl;
    cout<<"value of mark[4] is "<<*(p+4)<<endl;



    return 0;
}