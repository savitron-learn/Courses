#include <iostream>
#include<iomanip>

using namespace std;


int main(){

    // *************** if-else statement ***************

    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age < 13){
        cout<<"You are a Kid."<<endl;
    }
    else if(age < 18){
        cout<<"You are a Teenager but not an Adult."<<endl;
    }
    else if(age == 18){
        cout<<"You have just became an Adult."<<endl;
    }
    else{
        cout<<"You are an Adult."<<endl;
    }


    // *************** switch case *****************

    switch (age)
    {
    case 18:
        cout<<"You will get special discout of 20% at getting DL"<<endl;
        break;
    case 25:
        cout<<"You will get special discout of 10% at getting DL"<<endl;
        break;
    case 30:
        cout<<"You will get special discout 5% at getting DL"<<endl;
        break;
    default:
        cout<<"NO DISCOUNT"<<endl;
        break;
    }


    // **************** for loop *****************


    for(int i = 1; i < 40; i++){
        cout<<setw(5);
        cout<<(i)<<endl;
    }


    // **************** infinite for loop *****************


            // for(int x = 1; 23 < 40; x++){
            //     cout<<setw(5);
            //     cout<<(x)<<endl;
            // }
            


    // **************** while loop ****************


    int j = 1;
    while(j<=40){
        cout<<setw(5);
        cout<<j<<endl;
        j++;
    }


    // **************** infinite while loop ****************


            // int y = 1;
            // while(true){
            //     cout<<y<<endl;
            //     y++;
            // }   


    // *************** do while loop ***************


    int k = 1;
    do{
        cout<<k<<endl;
        k++;
    }while(false);




    return 0;
}