#include <iostream>

using namespace std;

// ********************** Inline Function ********************

inline int product(int a, int b){
    return a*b;
}

// ********************** Default Arguments *******************

float moneyReceived(int money, float factor = 1.04){
    return money*factor;
}

// ********************** Constant Arguments *********************

float money_Received(int money, const float factor = 1.04){
    return money*factor;
}



int main(){
    
    int a, b;
    cout<<"Enter the value of a & b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a & b is "<<product(a,b)<<endl; 

    int money = 100000;
    cout<<"You will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: You will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year"<<endl;

    int m = 5000;
    cout<<"You will receive "<<money_Received(m)<<" Rs after 1 year including VIP"<<endl;

    return 0;
} 