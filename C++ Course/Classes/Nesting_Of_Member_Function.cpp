#include <iostream>
#include <string>

using namespace std;

class binary{
    public:
        string s;
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary Number: ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }    
}

void binary :: ones(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        } 
    }    
}

void binary :: display(void){
    cout<<"Your String is: ";           
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}